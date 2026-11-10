/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bacc4; name: FUN_027bacc4
 */


void FUN_027bacc4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint local_d0 [2];
  byte local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  long *plStack_b0;
  char local_a8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  undefined1 auStack_40 [32];
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x20))(), (uVar2 & 1) != 0)) {
    FUN_027bade0(local_d0,(long *)(param_1 + 0x50));
    uVar2 = FUN_027bae4c(local_d0);
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_d0[0] << 0x20;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_d0[0] << 0x20;
    }
    *(ulong *)(param_1 + 0x44) = uVar2;
    if (local_d0[0] == 0) {
      FUN_027bae98(param_1 + 0x60,&local_80);
    }
    FUN_01cfa410(auStack_40);
    if ((local_60 & 1) != 0) {
      (**(code **)(*plStack_48 + 0x18))
                (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    }
    if ((local_80 & 1) != 0) {
      (**(code **)(*plStack_68 + 0x18))
                (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
    }
    if (local_a8 != '\0') {
      FUN_01cfa44c(auStack_a0,local_98);
    }
    if ((local_c8 & 1) != 0) {
      (**(code **)(*plStack_b0 + 0x18))
                (plStack_b0,local_b8,CONCAT71(uStack_c7,local_c8) & 0xfffffffffffffffe,1);
    }
  }
  return;
}


