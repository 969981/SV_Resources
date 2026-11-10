/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001642b0; name: FUN_001642b0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001642b0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar3 = param_1[2];
  if (param_1[1] != uVar3) {
    lVar10 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    else {
      uVar6 = uVar3 * 8;
      uVar2 = uVar3;
      if (0x1ff < uVar6) {
        uVar2 = uVar6 + 0xfff >> 3 & 0x1ffffffffffffe00;
      }
      if (0x10000 < uVar6) {
        uVar2 = uVar6 + 0xffff >> 3 & 0x1fffffffffffe000;
      }
      lVar5 = (**(code **)PTR_PTR_047cb890)(uVar2 << 3,0x10);
      if (lVar5 == 0) {
        FUN_0015ed40(uVar2 << 3);
        iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector.h",0xbf,"makefit1",
                             "pNew != NULL");
        if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar6 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar8 = (undefined8 *)(lVar5 + 0x10);
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        do {
          puVar8[-2] = puVar9[-2];
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          puVar1 = puVar9 + 1;
          lVar7 = lVar7 + 4;
          puVar9 = puVar9 + 4;
          puVar8[1] = *puVar1;
          puVar8 = puVar8 + 4;
        } while (uVar3 - uVar6 != lVar7);
      }
      if (uVar6 != 0) {
        puVar8 = (undefined8 *)(lVar10 + lVar7 * 8);
        puVar9 = (undefined8 *)(lVar5 + lVar7 * 8);
        do {
          uVar6 = uVar6 - 1;
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar6 != 0);
      }
      lVar10 = *param_1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      *param_1 = lVar5;
    }
    if (lVar10 != 0) {
      (**(code **)PTR_PTR_047cb898)(lVar10);
      return;
    }
  }
  return;
}


