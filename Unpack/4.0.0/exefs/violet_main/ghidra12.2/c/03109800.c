/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03109800; name: FUN_03109800
 */


void FUN_03109800(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 4);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    if (uVar3 != 1) {
      iVar7 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = puVar5[1];
        iVar7 = iVar7 + 2;
        *puVar6 = *puVar5;
        puVar6[1] = uVar2;
        puVar1 = puVar5 + 2;
        uVar2 = puVar5[3];
        puVar5 = puVar5 + 4;
        puVar6[2] = *puVar1;
        puVar6[3] = uVar2;
        puVar6 = puVar6 + 4;
      } while (iVar7 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar4;
  return;
}


