/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f56290; name: FUN_02f56290
 */


void FUN_02f56290(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_410 [64];
  long *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 - 1);
  uVar3 = 0;
  local_210[0] = param_1;
LAB_02f562c8:
  lVar4 = (long)(int)uVar3;
LAB_02f562cc:
  do {
    plVar8 = local_410[0];
    do {
      local_410[0] = plVar8;
      lVar7 = param_1[(long)local_410[0] - (long)param_1 >> 4];
      plVar6 = param_1;
      plVar8 = local_410[0];
      do {
        uVar1 = (ulong)*(uint *)(lVar7 + 0x10) & 0xffffff |
                (ulong)(*(uint *)(lVar7 + 0x14) & 0xffffff) << 0x20;
        do {
          plVar5 = plVar6;
          plVar6 = plVar5 + 1;
          lVar9 = *plVar5;
        } while (((ulong)*(uint *)(lVar9 + 0x10) & 0xffffff |
                 (ulong)(*(uint *)(lVar9 + 0x14) & 0xffffff) << 0x20) < uVar1);
        plVar10 = plVar8 + 1;
        do {
          plVar8 = plVar10;
          plVar10 = plVar8 + -1;
          lVar2 = *plVar10;
        } while (uVar1 < ((ulong)*(uint *)(lVar2 + 0x10) & 0xffffff |
                         (ulong)(*(uint *)(lVar2 + 0x14) & 0xffffff) << 0x20));
        if (plVar10 < plVar5) {
          plVar6 = plVar5;
          plVar8 = plVar10;
        }
        else {
          plVar8 = plVar8 + -2;
          if (plVar5 != plVar10) {
            *plVar10 = lVar9;
            *plVar5 = lVar2;
          }
        }
      } while (plVar6 <= plVar8);
      if (plVar8 <= param_1) {
        param_1 = plVar6;
        if (plVar6 < local_410[0]) goto LAB_02f562cc;
        uVar3 = (int)lVar4 - 1;
        if ((int)lVar4 < 1) {
          return;
        }
        param_1 = local_210[uVar3];
        local_410[0] = local_410[uVar3];
        goto LAB_02f562c8;
      }
    } while (local_410[0] <= plVar6);
    plVar5 = plVar8;
    plVar10 = param_1;
    if ((long)local_410[0] - (long)plVar6 <= (long)plVar8 - (long)param_1) {
      plVar5 = local_410[0];
      plVar10 = plVar6;
      local_410[0] = plVar8;
      plVar6 = param_1;
    }
    local_210[lVar4] = plVar6;
    local_410[lVar4] = local_410[0];
    lVar4 = lVar4 + 1;
    param_1 = plVar10;
    local_410[0] = plVar5;
  } while( true );
}


