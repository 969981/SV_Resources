/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d81ac; name: FUN_034d81ac
 */


undefined8 FUN_034d81ac(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  int local_48 [2];
  int local_40;
  undefined4 local_38;
  uint uStack_34;
  
  if ((*(uint *)(param_1 + 0x2c) <= (uint)param_2) ||
     (iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))
                        (*(long **)(param_1 + 0xb8),param_2,local_48), iVar3 != 1)) {
    return 2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_034d9cd0(puVar1,local_40 + *(int *)(param_1 + 0xd0),param_3);
  if ((int)uVar4 != 3) {
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
    }
    else {
      (**(code **)(*(long *)*puVar1 + 0x90))();
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar2 = (uint *)(*(long *)(param_1 + 0x18) + 699);
  *(byte *)(param_1 + 0x20) = (byte)(*puVar2 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  *(uint *)(*(long *)(param_1 + 0x18) + 0x2b4) = (uint)param_2 - local_48[0];
  *puVar2 = *puVar2 & 0xfe3fffff;
  *(int *)(param_1 + 0x28) = local_48[0];
  *(short *)(param_1 + 0x38) = (short)param_3;
  if ((*(byte *)(param_1 + 0xdc) >> 4 & 1) == 0) {
    if ((param_3 & 0xffff) == 1) {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x34) + 1;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x58))
                      (*(long **)(param_1 + 0xb8),puVar1,local_48,iVar3 - local_48[0],param_3);
    if (iVar3 != 1) {
      return 2;
    }
    if (((*(ushort *)(param_1 + 0xd4) & 0x11) == 1) && ((*(byte *)(param_1 + 0xdc) & 0x30) == 0)) {
      local_38 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x7c);
      uStack_34 = *(uint *)(*(long *)(param_1 + 0x18) + 699) >> 0x1c & 7;
      iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))
                        (*(long **)(param_1 + 0xb8),puVar1,param_1 + 0x24,&local_38,0);
      if (iVar3 != 0x34) {
        if (iVar3 == 0x11) {
          *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
          goto LAB_034d838c;
        }
        if (iVar3 != 2) goto LAB_034d838c;
      }
      *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) | 0x40;
    }
  }
LAB_034d838c:
  if ((*(byte *)(param_1 + 0xdc) >> 5 & 1) != 0) {
    dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x24));
    dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 600));
    uVar4 = NEON_ucvtf((ulong)*(uint *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(double *)(param_1 + 0x98) = dVar5 / dVar6;
  }
  return 1;
}


