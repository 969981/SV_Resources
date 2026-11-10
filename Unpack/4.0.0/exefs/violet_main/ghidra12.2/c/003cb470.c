/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cb470; name: FUN_003cb470
 */


undefined8 FUN_003cb470(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = 0;
  if (*(long *)(param_1 + 0x218) == 0) {
    iVar1 = FUN_003a4930(param_1,param_2,
                         *(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x26),&local_28);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (param_2 != 0x16) goto LAB_003cb55c;
LAB_003cb4f8:
    if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
        (((uint)param_1[0x17] < 0x2c &&
         ((1L << ((ulong)(uint)param_1[0x17] & 0x3f) & 0xc0200000000U) != 0)))) ||
       (iVar1 = FUN_003acec0(param_1,*(long *)(*(long *)(param_1 + 0x22) + 8) +
                                     *(long *)(param_1 + 0x28),local_28), iVar1 != 0)) {
LAB_003cb55c:
      if (*(long *)(param_1 + 0x26) - local_28 != 0) {
        *(long *)(param_1 + 0x26) = *(long *)(param_1 + 0x26) - local_28;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + local_28;
        return 0;
      }
      if (*(code **)(param_1 + 0x2e) == (code *)0x0) {
        return 1;
      }
      (**(code **)(param_1 + 0x2e))
                (1,*param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                 *(long *)(param_1 + 0x28) + local_28,param_1,*(undefined8 *)(param_1 + 0x30));
      return 1;
    }
  }
  else {
    if (param_2 == 0x16) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x218) + 8))
                        (param_1,param_1[0x20d],
                         *(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x26));
      if (iVar1 != 0) {
        local_28 = *(long *)(param_1 + 0x26);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
        goto LAB_003cb4f8;
      }
      uVar2 = 0x44;
      uVar3 = 0x37;
    }
    else {
      uVar2 = 0x42;
      uVar3 = 0x3e;
    }
    FUN_004806c0(0x14,0xbbc,uVar2,"external/openssl/ssl/statem/statem_lib.c",uVar3);
  }
  return 0xffffffff;
}


