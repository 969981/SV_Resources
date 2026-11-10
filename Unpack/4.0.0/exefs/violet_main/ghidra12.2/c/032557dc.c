/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032557dc; name: FUN_032557dc
 */


void FUN_032557dc(undefined8 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    puVar3 = (undefined8 *)*param_1;
    puVar4 = puVar2;
    if (uVar1 != 1) {
      iVar5 = -(uVar1 & 0xfffffffe);
      do {
        puVar4[1] = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[3] = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
    }
    if ((uVar1 & 1) != 0) {
      puVar4[1] = puVar3[1];
      *puVar4 = *puVar3;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar2;
  return;
}


