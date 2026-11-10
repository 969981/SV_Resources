/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040a120; name: FUN_0040a120
 */


uint FUN_0040a120(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  
  if (param_2 == param_3) {
    uVar11 = FUN_0040a3a0(param_1,param_2,param_4,param_5);
    return uVar11;
  }
  FUN_003ed410(param_5);
  plVar6 = (long *)FUN_003ed5c0(param_5);
  if (plVar6 != (long *)0x0) {
    iVar1 = (int)param_2[1] + (int)param_3[1];
    iVar5 = iVar1 + 4;
    lVar7 = FUN_003eb9a0(plVar6,iVar5);
    if (lVar7 != 0) {
      *(int *)(plVar6 + 1) = iVar5;
      if (0 < iVar5) {
        memset((void *)*plVar6,0,(ulong)(iVar1 + 3) * 4 + 4);
      }
      uVar8 = (ulong)*(uint *)(param_3 + 1);
      if (0 < (int)*(uint *)(param_3 + 1)) {
        lVar7 = 0;
        uVar10 = 0;
        do {
          uVar11 = *(uint *)(*param_3 + uVar10 * 4);
          if ((uVar10 | 1) == uVar8) {
            uVar14 = 0;
            uVar9 = *(uint *)(param_2 + 1);
          }
          else {
            uVar14 = *(uint *)(*param_3 + (uVar10 | 1) * 4);
            uVar9 = *(uint *)(param_2 + 1);
          }
          if (0 < (int)uVar9) {
            lVar12 = 0;
            lVar13 = 0xc;
            do {
              uVar4 = *(uint *)(*param_2 + lVar12 * 4);
              if (lVar12 + 1U == (ulong)uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(uint *)(*param_2 + lVar12 * 4 + 4);
              }
              FUN_0040b930(&uStack_6c,&local_70,uVar9,uVar14);
              FUN_0040b930(&local_74,&local_78,uVar4,uVar11);
              FUN_0040b930(&uStack_64,&local_68,uVar9 ^ uVar4,uVar14 ^ uVar11);
              local_74 = local_70 ^ local_74;
              local_70 = local_74 ^ uStack_64 ^ uStack_6c;
              local_74 = local_74 ^ local_78 ^ local_68;
              puVar2 = (uint *)(*plVar6 + lVar7 + lVar13);
              lVar3 = *plVar6 + lVar7 + lVar12 * 4;
              lVar12 = lVar12 + 2;
              lVar13 = lVar13 + 8;
              puVar2[-3] = puVar2[-3] ^ local_78;
              *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) ^ local_74;
              *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) ^ local_70;
              *puVar2 = *puVar2 ^ uStack_6c;
              uVar9 = *(uint *)(param_2 + 1);
            } while ((int)lVar12 < (int)uVar9);
            uVar8 = (ulong)*(uint *)(param_3 + 1);
          }
          uVar10 = uVar10 + 2;
          lVar7 = lVar7 + 8;
        } while ((int)uVar10 < (int)uVar8);
      }
      FUN_003ebc30(plVar6);
      iVar5 = FUN_00409c50(param_1,plVar6,param_4);
      uVar11 = (uint)(iVar5 != 0);
      goto LAB_0040a36c;
    }
  }
  uVar11 = 0;
LAB_0040a36c:
  FUN_003ed530(param_5);
  return uVar11;
}


