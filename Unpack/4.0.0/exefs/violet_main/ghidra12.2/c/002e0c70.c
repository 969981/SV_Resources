/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e0c70; name: FUN_002e0c70
 */


void FUN_002e0c70(undefined8 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  if (param_4 < 0xb) {
    uVar6 = FUN_002e626c();
    puVar5 = PTR_DAT_047cc8e8;
    if (((int)param_2 <= (int)param_3) && ((uVar6 & 1) != 0)) {
      uVar2 = *(uint *)PTR_DAT_047cc8e0;
      if (0 < (int)uVar2) {
        puVar10 = (uint *)(PTR_DAT_047cc8e8 + (long)(int)uVar2 * 0xc);
        do {
          puVar11 = (uint *)puVar5;
          uVar8 = uVar2;
          do {
            uVar3 = uVar8 >> 1;
            puVar9 = puVar11 + (ulong)uVar3 * 3;
            uVar7 = *puVar9;
            if (((int)uVar7 <= (int)param_2) && ((int)param_2 <= (int)puVar11[(ulong)uVar3 * 3 + 1])
               ) goto joined_r0x002e0d84;
            uVar4 = uVar8 - (uVar3 + 1);
            uVar8 = uVar3;
            if ((int)uVar7 <= (int)param_2) {
              puVar11 = puVar11 + (ulong)(uVar3 + 1) * 3;
              uVar8 = uVar4;
            }
          } while (0 < (int)uVar8);
          if (puVar10 <= puVar11 || puVar11 == (uint *)0x0) {
            return;
          }
          uVar7 = *puVar11;
          puVar9 = puVar11;
joined_r0x002e0d84:
          if ((int)uVar7 <= (int)param_2) {
            uVar7 = puVar9[2];
            uVar8 = puVar9[1];
            if ((int)param_3 <= (int)puVar9[1]) {
              uVar8 = param_3;
            }
            uVar3 = uVar7;
            uVar4 = uVar7;
            if (uVar7 == 1) {
              uVar3 = ~uVar8 & 1;
              uVar4 = -(uint)((int)param_2 % 2 == 1);
            }
            uVar1 = (param_2 & 1) - 1;
            if (uVar7 != 0xffffffff) {
              uVar1 = uVar4;
            }
            uVar4 = (uint)((int)uVar8 % 2 == 1);
            if (uVar7 != 0xffffffff) {
              uVar4 = uVar3;
            }
            FUN_002e0c70(param_1,uVar1 + param_2,uVar4 + uVar8,param_4 + 1);
            uVar7 = puVar9[1] + 1;
          }
          param_2 = uVar7;
        } while ((int)uVar7 <= (int)param_3);
      }
    }
  }
  else {
    FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x15f);
                    /* try { // try from 002e0cb0 to 002e0cbf has its CatchHandler @ 002e0e48 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_168,"AddFoldedRange recurses too much.",0x21);
    FUN_002cc97c(auStack_170);
  }
  return;
}


