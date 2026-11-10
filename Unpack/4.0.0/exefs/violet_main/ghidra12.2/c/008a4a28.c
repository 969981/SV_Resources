/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a4a28; name: FUN_008a4a28
 */


void FUN_008a4a28(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  void *__s;
  ulong uVar6;
  ushort local_38;
  ushort local_36;
  
  lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar5 == 0) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(lVar5 + (ulong)*(uint *)(param_1 + 0x34));
  }
  memset(__s,0,0x220);
  *(undefined4 *)((long)__s + 4) = *param_5;
  *(undefined4 *)((long)__s + 8) = param_5[1];
  if (param_6 != (undefined4 *)0x0) {
    *(undefined4 *)((long)__s + 0xc) = *param_6;
    *(undefined4 *)((long)__s + 0x11c) = param_6[1];
  }
  uVar2 = FUN_008a4b58(param_1,__s);
  uVar2 = FUN_008a4d0c(uVar2,__s,param_2);
  FUN_008a4ec4(uVar2,__s,param_3,param_4);
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 3) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x18) + lVar5 + 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(&local_38);
        uVar1 = NEON_ucvtf((uint)local_38);
        *(undefined4 *)((long)__s + lVar5 + 0x1f0) = uVar1;
        uVar1 = NEON_ucvtf((uint)local_36);
        *(undefined4 *)((long)__s + lVar5 + 500) = uVar1;
        uVar4 = *(uint *)(param_1 + 0x14);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (uVar4 & 3));
  }
  return;
}


