/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e33d50; name: FUN_00e33d50
 */


void FUN_00e33d50(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar5 = (long *)*param_1;
  uVar6 = param_1[7];
  plVar2 = plVar5 + uVar6 * 8;
  if ((uVar6 == 0) || (*plVar5 == *param_2)) {
    plVar7 = plVar5;
  }
  else {
    plVar9 = plVar5;
    lVar8 = uVar6 * 0x40;
    do {
      lVar8 = lVar8 + -0x40;
      if (lVar8 == 0) {
        plVar7 = plVar2;
        break;
      }
      plVar10 = plVar9 + 8;
      plVar7 = plVar9 + 8;
      plVar9 = plVar9 + 8;
    } while (*plVar10 != *param_2);
  }
  if (plVar2 != plVar7) {
    uVar11 = (long)plVar7 - (long)plVar5 >> 6;
    if (uVar6 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("index < m_end","erase",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                 ,0x391,"FlatHashTable::erase iterator out of bounds");
    }
    uVar1 = uVar11 + 1;
    if ((uVar1 < (ulong)(param_1[1] - (long)plVar5 >> 6)) && (uVar1 != uVar6)) {
      plVar7 = plVar5 + uVar1 * 8;
      FUN_00e33f00(plVar5 + uVar11 * 8,plVar7);
      plVar5 = plVar5 + uVar11 * 8 + 8;
      bVar4 = plVar5 == plVar7;
      if (plVar7 + 8 != plVar2) {
        lVar8 = uVar6 * 0x40 + uVar11 * -0x40 + -0x80;
        plVar9 = plVar7;
        plVar10 = plVar7 + 8;
        do {
          plVar5 = plVar10;
          plVar7 = plVar5;
          if (!bVar4) {
            plVar7 = plVar9;
          }
          FUN_00e33f00(plVar5 + -8,plVar5);
          bVar4 = plVar5 == plVar7;
          lVar8 = lVar8 + -0x40;
          plVar9 = plVar7;
          plVar10 = plVar5 + 8;
        } while (lVar8 != 0);
      }
      if (!bVar4) {
        plVar9 = plVar7;
        do {
          plVar10 = plVar5;
          while( true ) {
            FUN_00e33f00(plVar10,plVar7);
            plVar7 = plVar7 + 8;
            plVar5 = plVar10 + 8;
            if (plVar7 != plVar2) break;
            plVar10 = plVar5;
            plVar7 = plVar9;
            if (plVar9 == plVar5) goto LAB_00e33e50;
          }
          plVar3 = plVar7;
          if (plVar9 + -8 != plVar10) {
            plVar3 = plVar9;
          }
          plVar9 = plVar3;
        } while( true );
      }
    }
LAB_00e33e50:
    param_1[7] = param_1[7] + -1;
  }
  return;
}


