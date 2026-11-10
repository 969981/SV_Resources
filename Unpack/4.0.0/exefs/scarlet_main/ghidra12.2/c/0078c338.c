/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078c338; name: FUN_0078c338
 */


void FUN_0078c338(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  bool bVar10;
  long lVar11;
  
  lVar11 = *param_1;
  plVar8 = (long *)FUN_007935e4();
  uVar1 = 0;
  if (*plVar8 != 0) {
    uVar1 = lVar11 / *plVar8;
  }
  DAT_044df420 = DAT_044df420 + uVar1;
  if (uVar1 < DAT_044df430) {
    DAT_044df430 = uVar1;
  }
  if (DAT_044df428 < uVar1) {
    DAT_044df428 = uVar1;
  }
  puVar9 = &DAT_044df440;
  if (DAT_044df440 < uVar1) {
    lVar11 = 0;
    bVar10 = true;
    bVar2 = true;
    bVar3 = true;
    bVar4 = true;
    bVar5 = true;
    bVar6 = true;
  }
  else {
    puVar9 = &DAT_044df450;
    if (DAT_044df450 < uVar1) {
      bVar6 = false;
      bVar10 = true;
      bVar2 = true;
      bVar3 = true;
      bVar4 = true;
      bVar5 = true;
      lVar11 = 1;
    }
    else {
      puVar9 = &DAT_044df460;
      if (DAT_044df460 < uVar1) {
        bVar5 = false;
        bVar6 = false;
        bVar10 = true;
        lVar11 = 2;
        bVar2 = true;
        bVar3 = true;
        bVar4 = true;
      }
      else {
        puVar9 = &DAT_044df470;
        if (DAT_044df470 < uVar1) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          bVar10 = true;
          lVar11 = 3;
          bVar2 = true;
          bVar3 = true;
        }
        else {
          puVar9 = &DAT_044df480;
          if (DAT_044df480 < uVar1) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            bVar10 = true;
            lVar11 = 4;
            bVar2 = true;
          }
          else {
            puVar9 = &DAT_044df490;
            if (DAT_044df490 < uVar1) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              bVar10 = true;
              lVar11 = 5;
            }
            else {
              puVar9 = &DAT_044df4a0;
              if (uVar1 <= DAT_044df4a0) {
                puVar9 = &DAT_044df4b0;
                if (uVar1 <= DAT_044df4b0) {
                  DAT_044df418 = DAT_044df418 + 1;
                  return;
                }
                lVar11 = 7;
                goto LAB_0078c5e0;
              }
              bVar10 = false;
              bVar2 = false;
              bVar3 = false;
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              lVar11 = 6;
            }
          }
        }
      }
    }
  }
  DAT_044df4a8 = DAT_044df498;
  DAT_044df4b0 = DAT_044df4a0;
  if (bVar10) {
    DAT_044df498 = DAT_044df488;
    DAT_044df4a0 = DAT_044df490;
    if (bVar2) {
      DAT_044df488 = DAT_044df478;
      DAT_044df490 = DAT_044df480;
      if (bVar3) {
        DAT_044df478 = DAT_044df468;
        DAT_044df480 = DAT_044df470;
        if (bVar4) {
          DAT_044df468 = DAT_044df458;
          DAT_044df470 = DAT_044df460;
          if (bVar5) {
            DAT_044df458 = DAT_044df448;
            DAT_044df460 = DAT_044df450;
            if (bVar6) {
              DAT_044df448 = DAT_044df438;
              DAT_044df450 = DAT_044df440;
            }
          }
        }
      }
    }
  }
LAB_0078c5e0:
  iVar7 = DAT_044df418 + 1;
  (&DAT_044df438)[lVar11 * 4] = DAT_044df418;
  DAT_044df418 = iVar7;
  *puVar9 = uVar1;
  return;
}


