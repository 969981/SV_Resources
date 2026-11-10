/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03498f18; name: FUN_03498f18
 */


void FUN_03498f18(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  FUN_034960ac(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)PTR_DAT_047e6d08);
  puVar2 = PTR_DAT_047e6f28;
  lVar3 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x188));
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0x1b0) == 0) {
LAB_03499004:
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x188));
    FUN_03497ca8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  lVar4 = **(long **)(lVar5 + 0x1a8);
  if (lVar4 == 0) {
    uVar6 = 0;
    do {
      if (*(int *)(lVar5 + 0x1b0) - 1 == uVar6) goto LAB_03499004;
      uVar6 = uVar6 + 1;
      lVar4 = (*(long **)(lVar5 + 0x1a8))[uVar6 & 0xffffffff];
    } while (lVar4 == 0);
  }
  else {
    uVar6 = 0;
  }
  do {
    do {
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xff;
      local_60 = 0xff;
      local_58 = 0;
      FUN_03490f40(lVar4 + 0x38,FUN_0348b45c,&local_80,&local_80,lVar4);
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != 0);
    do {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      if (*(uint *)(lVar5 + 0x1b0) <= uVar1) goto LAB_03499004;
      lVar4 = *(long *)(*(long *)(lVar5 + 0x1a8) + (ulong)uVar1 * 8);
    } while (lVar4 == 0);
  } while( true );
}


