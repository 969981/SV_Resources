/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030427e4; name: FUN_030427e4
 */


void FUN_030427e4(long *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar2 = (ulong *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 3);
  puVar1 = PTR_DAT_047d1a08;
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    puVar7 = (ulong *)*param_1;
    puVar3 = puVar2;
    puVar4 = puVar7;
    if (uVar6 != 1) {
      iVar5 = -(uVar6 & 0xfffffffe);
      do {
        *puVar3 = *puVar4;
        *puVar4 = 0;
        puVar3[1] = puVar4[1];
        puVar4[1] = 0;
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
    }
    if ((uVar6 & 1) != 0) {
      *puVar3 = *puVar4;
      *puVar4 = 0;
    }
    do {
      if ((*puVar7 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,*puVar7 - 1,0);
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar1 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = (long)puVar2;
  return;
}


