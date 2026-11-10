/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a4368; name: FUN_014a4368
 */


void FUN_014a4368(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_b8;
  char acStack_b0 [128];
  
  memset(acStack_b0,0,0x80);
  lVar3 = 0;
  plVar2 = (long *)(param_1 + 0x6920);
  do {
    snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",(int)lVar3);
    FUN_014a5c20(&local_b8,acStack_b0);
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = lVar3 + 1;
    *plVar2 = local_b8;
    plVar2 = plVar2 + 1;
  } while (lVar3 != 0x1e);
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x1e);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b00);
  *(undefined8 *)(param_1 + 0x6b00) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b00) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x1f);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b08);
  *(undefined8 *)(param_1 + 0x6b08) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b08) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x20);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b10);
  *(undefined8 *)(param_1 + 0x6b10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b10) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x21);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b18);
  *(undefined8 *)(param_1 + 0x6b18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b18) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x22);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b20);
  *(undefined8 *)(param_1 + 0x6b20) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b20) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x23);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b28);
  *(undefined8 *)(param_1 + 0x6b28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b28) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x3c);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b30);
  *(undefined8 *)(param_1 + 0x6b30) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b30) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x3d);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b38);
  *(undefined8 *)(param_1 + 0x6b38) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b38) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x3e);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b40);
  *(undefined8 *)(param_1 + 0x6b40) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b40) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x3f);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b48);
  *(undefined8 *)(param_1 + 0x6b48) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b48) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x40);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b50);
  *(undefined8 *)(param_1 + 0x6b50) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b50) = local_b8;
  snprintf(acStack_b0,0x80,"N_icon_poke_pos_%02d",0x41);
  FUN_014a5c20(&local_b8,acStack_b0);
  plVar2 = *(long **)(param_1 + 0x6b58);
  *(undefined8 *)(param_1 + 0x6b58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long *)(param_1 + 0x6b58) = local_b8;
  return;
}


