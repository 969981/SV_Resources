/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03396bf8; name: FUN_03396bf8
 */


void FUN_03396bf8(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x18);
  puVar1 = PTR_PTR_047d1a50;
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    puVar4 = (undefined8 *)*param_1;
    puVar7 = puVar2;
    puVar8 = puVar4;
    iVar6 = iVar3;
    do {
      *puVar7 = *puVar8;
      FUN_03396d54(puVar8 + 1,puVar1);
      puVar7[1] = puVar8[1];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)((long)puVar8 + 0x14);
      iVar6 = iVar6 + -1;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8 = puVar8 + 3;
      puVar7 = puVar7 + 3;
    } while (iVar6 != 0);
    puVar5 = (uint *)((long)puVar4 + 0x14);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(long *)(puVar5 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar5 + -3),(ulong)*puVar5 << 4);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      iVar3 = iVar3 + -1;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + 6;
    } while (iVar3 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar2;
  return;
}


