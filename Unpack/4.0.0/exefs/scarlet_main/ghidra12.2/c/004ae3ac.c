/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ae3ac; name: FUN_004ae3ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae3ac(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  
  local_60 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar6 = s_File_recursively_imports_itself__03c099f4._24_8_;
  uVar5 = s_File_recursively_imports_itself__03c099f4._16_8_;
  uVar4 = s_File_recursively_imports_itself__03c099f4._8_8_;
  uVar3 = s_File_recursively_imports_itself__03c099f4._0_8_;
  uStack_68 = _UNK_03cab708;
  local_70 = _DAT_03cab700;
  local_60[0x20] = ' ';
  local_60[0x21] = '\0';
  *(undefined8 *)(local_60 + 8) = uVar4;
  *(undefined8 *)local_60 = uVar3;
  *(undefined8 *)(local_60 + 0x18) = uVar6;
  *(undefined8 *)(local_60 + 0x10) = uVar5;
  plVar7 = *(long **)(param_1 + 8);
  uVar9 = (ulong)param_3;
  if (uVar9 < (ulong)((plVar7[1] - *plVar7 >> 3) * -0x5555555555555555)) {
    lVar10 = uVar9 * 0x18;
    uVar11 = uVar9;
    do {
      pbVar1 = (byte *)(*plVar7 + lVar10);
      uVar2 = *(ulong *)(pbVar1 + 8);
      pbVar8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar8 = pbVar1 + 1;
        uVar2 = (ulong)(*pbVar1 >> 1);
      }
                    /* try { // try from 004ae468 to 004ae47f has its CatchHandler @ 004ae57c */
      FUN_0021d540(&local_70,pbVar8,uVar2);
      FUN_0021d540(&local_70,&DAT_03c5c12e,4);
      plVar7 = *(long **)(param_1 + 8);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar11 < (ulong)((plVar7[1] - *plVar7 >> 3) * -0x5555555555555555));
  }
  pbVar8 = *(byte **)(param_2 + 0xb0);
  uVar11 = *(ulong *)(pbVar8 + 8);
  pbVar1 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar1 = pbVar8 + 1;
    uVar11 = (ulong)(*pbVar8 >> 1);
  }
                    /* try { // try from 004ae4c0 to 004ae53b has its CatchHandler @ 004ae578 */
  FUN_0021d540(&local_70,pbVar1,uVar11);
  plVar7 = *(long **)(param_1 + 0x10);
  lVar10 = **(long **)(param_1 + 8);
  if (uVar9 < ((*(long **)(param_1 + 8))[1] - lVar10 >> 3) * -0x5555555555555555 - 1U) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))
                (plVar7,param_1 + 0x38,lVar10 + (long)(param_3 + 1) * 0x18,param_2,9,&local_70);
    }
  }
  else if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))
              (plVar7,param_1 + 0x38,*(undefined8 *)(param_2 + 0xb0),param_2,9,&local_70);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  return;
}


