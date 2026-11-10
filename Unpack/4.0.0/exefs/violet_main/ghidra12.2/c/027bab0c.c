/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bab0c; name: FUN_027bab0c
 */


void FUN_027bab0c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint local_78 [2];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  char local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x20))(), (uVar2 & 1) != 0)) {
    FUN_027babc0(local_78,(long *)(param_1 + 0x50));
    uVar2 = FUN_027bac2c(local_78);
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_78[0] << 0x20;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      uVar2 = uVar2 & 0xffffffff | (ulong)local_78[0] << 0x20;
    }
    *(ulong *)(param_1 + 0x44) = uVar2;
    if (local_50 != '\0') {
      FUN_01cfa44c(auStack_48,local_40);
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*plStack_58 + 0x18))
                (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    }
  }
  return;
}


