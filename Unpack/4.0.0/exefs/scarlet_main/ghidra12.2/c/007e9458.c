/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9458; name: FUN_007e9458
 */


void FUN_007e9458(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined *local_130;
  undefined1 local_128;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121 [193];
  
  uVar7 = (**(code **)(*param_1 + 0x78))();
  puVar6 = PTR_DAT_047d0c98;
  puVar5 = PTR_DAT_047d0860;
  if ((uVar7 & 1) != 0) {
    FUN_007ed630(param_1 + 10);
    return;
  }
  plVar1 = param_1 + 10;
LAB_007e94fc:
  do {
    lVar8 = FUN_007eaea0(param_1[9],*(undefined4 *)((long)param_1 + 0xcc));
    if (*(char *)(lVar8 + 0x648) == '\0') {
      FUN_007ed630(plVar1);
      if (*plVar1 != 0) goto LAB_007e95b4;
LAB_007e94dc:
      *(int *)((long)param_1 + 0xcc) = *(int *)((long)param_1 + 0xcc) + 1;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      uVar7 = (**(code **)(*param_1 + 0x78))(param_1);
    }
    else {
      uVar3 = 0;
      if (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8)) {
        uVar3 = (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x14)) - 0x1c;
      }
      if (*(uint *)(param_1 + 0x1a) < uVar3) {
        FUN_007ed2d0();
        lVar8 = *plVar1;
      }
      else {
        FUN_007ed630(plVar1,lVar8);
        lVar8 = *plVar1;
      }
      if (lVar8 == 0) goto LAB_007e94dc;
      bVar4 = *(byte *)(param_1 + 0xf);
      iVar10 = 1;
      if ((bVar4 & 1) != 0) {
        iVar10 = 2;
      }
      if ((bVar4 & 2) != 0) {
        iVar10 = iVar10 + 2;
      }
      if ((bVar4 & 4) != 0) {
        iVar10 = iVar10 + 4;
      }
      if ((bVar4 & 8) != 0) {
        iVar10 = iVar10 + 8;
      }
      *(uint *)(param_1 + 0x1a) =
           (int)param_1[0x1a] + (uint)*(ushort *)((long)param_1 + 0x7a) + iVar10;
LAB_007e95b4:
      uVar7 = (**(code **)(*param_1 + 0x88))(param_1);
      if ((*(long *)puVar5 == 0) || ((uVar7 & 1) == 0)) goto LAB_007e94fc;
      if ((*(byte *)((long)param_1 + 0x79) & 1) == 0) {
        uVar7 = (**(code **)(*param_1 + 0xa8))(param_1,param_1 + 0x12);
        if ((uVar7 & 1) == 0) {
          local_150 = puVar6 + 0x10;
          local_130 = puVar6 + 0x68;
          local_140 = 0xc0;
          puVar9 = local_121;
          local_128 = 0;
          lVar8 = 0x2f;
          do {
            *(undefined4 *)(puVar9 + -6) = 0;
            lVar2 = lVar8 + 8;
            *(undefined2 *)(puVar9 + -2) = 0;
            *puVar9 = 0;
            puVar9 = local_121 + lVar8 + -0x27;
            local_121[lVar8 + -0x2e] = 0;
            lVar8 = lVar2;
          } while (lVar2 != 0xef);
          uStack_13c = 0;
          local_138 = 0;
          puStack_148 = &local_128;
          FUN_00796a68(param_1 + 0x12,&local_150);
          goto LAB_007e94fc;
        }
        lVar8 = FUN_007ed654(plVar1);
        if (lVar8 == 0) goto LAB_007e94fc;
      }
      uVar7 = (**(code **)(*param_1 + 0xa0))(param_1,plVar1);
    }
    if ((uVar7 & 1) != 0) {
      return;
    }
  } while( true );
}


