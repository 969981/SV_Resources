/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304354c; name: FUN_0304354c
 */


void FUN_0304354c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 6);
  puVar1 = PTR_PTR_047d1a50;
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    puVar3 = (undefined8 *)*param_1;
    puVar4 = puVar3;
    puVar7 = puVar2;
    iVar6 = iVar5;
    do {
      FUN_02e9b22c(puVar4,puVar1);
      *puVar7 = *puVar4;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_02e9b22c(puVar4 + 2,puVar1);
      puVar7[2] = puVar4[2];
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar4 + 3);
      *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)((long)puVar4 + 0x1c);
      puVar4[2] = 0;
      puVar4[3] = 0;
      FUN_02e9b22c(puVar4 + 4,puVar1);
      puVar7[4] = puVar4[4];
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar4 + 5);
      *(undefined4 *)((long)puVar7 + 0x2c) = *(undefined4 *)((long)puVar4 + 0x2c);
      puVar4[4] = 0;
      puVar4[5] = 0;
      FUN_02e9b22c(puVar4 + 6,puVar1);
      puVar7[6] = puVar4[6];
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar4 + 7);
      *(undefined4 *)((long)puVar7 + 0x3c) = *(undefined4 *)((long)puVar4 + 0x3c);
      iVar6 = iVar6 + -1;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4 = puVar4 + 8;
      puVar7 = puVar7 + 8;
    } while (iVar6 != 0);
    do {
      FUN_030436e8(puVar3);
      puVar3 = puVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar2;
  return;
}


