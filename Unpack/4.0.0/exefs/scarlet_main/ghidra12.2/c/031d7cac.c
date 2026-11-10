/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d7cac; name: FUN_031d7cac
 */


void FUN_031d7cac(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *local_240 [56];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulong *local_28;
  
  puVar12 = (ulong *)param_2[1];
  if (puVar12 != (ulong *)0x0) {
    lVar13 = *param_2;
    if (puVar12 == (ulong *)PTR_DAT_047e5b90) {
LAB_031d7d94:
      uVar7 = 0;
      do {
        uVar8 = (uint)*puVar12;
        if ((uVar8 >> 0x15 & 1) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = CONCAT44(uVar8,uVar8) & 0x1fffff001fffff;
          uVar11 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                        POPCOUNT((char)(uVar11 >> 0x10))) + 2];
        }
        uVar7 = uVar11 | uVar7;
      } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
      if ((lVar13 != 0) && (((uint)uVar7 >> 3 & 1) == 0)) {
        lVar13 = *param_2;
        *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | 0x1000;
        *(long *)(param_1 + 200) = lVar13;
        return;
      }
    }
    else {
      local_240[0] = puVar12;
      while( true ) {
        uVar8 = (uint)*local_240[0];
        if ((uVar8 >> 0xd & 1) != 0) break;
        if (((*local_240[0] & 1) != 0) ||
           (local_240[0] = (ulong *)local_240[0][1], local_240[0] == (ulong *)0x0))
        goto LAB_031d7d30;
      }
      if (local_240[0] != (ulong *)0x0) {
        uVar7 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
        local_240[0] = local_240[0] +
                       (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
        goto LAB_031d7d38;
      }
LAB_031d7d30:
      local_240[0] = (ulong *)0x0;
LAB_031d7d38:
      local_28 = (ulong *)PTR_DAT_047e5b90;
      while( true ) {
        uVar8 = (uint)*local_28;
        if ((uVar8 >> 0xd & 1) != 0) break;
        if (((*local_28 & 1) != 0) || (local_28 = (ulong *)local_28[1], local_28 == (ulong *)0x0))
        goto LAB_031d7df8;
      }
      if (local_28 != (ulong *)0x0) {
        uVar7 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
        local_28 = local_28 +
                   (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
        if (local_240[0] == (ulong *)0x0) goto LAB_031d7dfc;
        uVar7 = FUN_031dd354(local_240,&local_28);
        if ((uVar7 & 1) != 0) goto LAB_031d7d94;
        goto LAB_031d7e28;
      }
LAB_031d7df8:
      local_28 = (ulong *)0x0;
LAB_031d7dfc:
      puVar6 = (ulong *)PTR_DAT_047e5b90;
      do {
        if ((*puVar6 & 1) != 0) break;
        puVar6 = (ulong *)puVar6[1];
      } while (puVar6 != (ulong *)0x0);
      puVar9 = puVar12;
      do {
        if (puVar9 == puVar6) goto LAB_031d7d94;
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
    }
  }
LAB_031d7e28:
  if (*param_2 == 0) {
    local_70 = 1;
    uStack_68 = 0;
    uStack_58 = 0;
    local_80 = PTR_DAT_047e34b8 + 0x10;
    uStack_78 = 0xffffffff;
    local_50 = 0x1bf;
    local_48 = 0;
    local_60 = (undefined1 *)local_240;
    memset(local_240,0,0x1c0);
    FUN_0322bd4c(&local_80,"Adding null attr; this will be ignored",0x26);
    FUN_03226c50(0x22442111,local_240,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
                 ,0x234);
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | 0x20;
    iVar5 = *(int *)(param_1 + 0x178);
    lVar13 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x17c) & 0x7fffffff) <= iVar5) {
      FUN_031bc0f4((long *)(param_1 + 0x170),PTR_PTR_047d1a50 + 0x20,lVar13 + 1);
      iVar5 = *(int *)(param_1 + 0x178);
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x170) + (long)iVar5 * 0x18);
    lVar2 = param_2[1];
    *plVar10 = *param_2;
    plVar10[1] = lVar2;
    uVar7 = param_2[2];
    plVar10[2] = uVar7;
    if ((uVar7 & 1) != 0) {
      piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(int *)(param_1 + 0x178) = (int)(lVar13 + 1);
  }
  return;
}


