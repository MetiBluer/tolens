import { NgModule } from '@angular/core';
import { PreloadAllModules, RouterModule, Routes } from '@angular/router';

const routes: Routes = [
  {
    path: '',
    redirectTo: 'folder/Inbox',
    pathMatch: 'full'
  },
  {
    path: 'folder/:id',
    loadChildren: () => import('./folder/folder.module').then( m => m.FolderPageModule)
  },
  {
    path: 'accordion',
    loadChildren: () => import('./accordion/accordion.module').then( m => m.AccordionPageModule)
  },
  {
    path: 'alert',
    loadChildren: () => import('./alert/alert.module').then( m => m.AlertPageModule)
  },
  {
    path: 'button',
    loadChildren: () => import('./button/button.module').then( m => m.ButtonPageModule)
  },
  {
    path: 'ripple-effect',
    loadChildren: () => import('./ripple-effect/ripple-effect.module').then( m => m.RippleEffectPageModule)
  },
  {
    path: 'card',
    loadChildren: () => import('./card/card.module').then( m => m.CardPageModule)
  },
  {
    path: 'grid',
    loadChildren: () => import('./grid/grid.module').then( m => m.GridPageModule)
  },
  {
    path: 'icon',
    loadChildren: () => import('./icon/icon.module').then( m => m.IconPageModule)
  },
  {
    path: 'loading',
    loadChildren: () => import('./loading/loading.module').then( m => m.LoadingPageModule)
  },
  {
    path: 'input',
    loadChildren: () => import('./input/input.module').then( m => m.InputPageModule)
  },
  {
    path: 'item',
    loadChildren: () => import('./item/item.module').then( m => m.ItemPageModule)
  },
  {
    path: 'list',
    loadChildren: () => import('./list/list.module').then( m => m.ListPageModule)
  },
  {
    path: 'avatar',
    loadChildren: () => import('./avatar/avatar.module').then( m => m.AvatarPageModule)
  },
  {
    path: 'menu',
    loadChildren: () => import('./menu/menu.module').then( m => m.MenuPageModule)
  },
  {
    path: 'modal',
    loadChildren: () => import('./modal/modal.module').then( m => m.ModalPageModule)
  },
  {
    path: 'popover',
    loadChildren: () => import('./popover/popover.module').then( m => m.PopoverPageModule)
  }
];

@NgModule({
  imports: [
    RouterModule.forRoot(routes, { preloadingStrategy: PreloadAllModules })
  ],
  exports: [RouterModule]
})
export class AppRoutingModule {}
