/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00351340; name: FUN_00351340
 */


long FUN_00351340(undefined8 param_1,int param_2,undefined8 *param_3,ulong *param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar10 = (int)param_5 * 2 + 0xf;
  lVar7 = FUN_0038c780((uVar10 & 0xff) * 8 + 0x38);
  if (lVar7 == 0) {
    return 2;
  }
  *(undefined8 *)(lVar7 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x27) = 0xffffffffffffffff;
  *(char *)(lVar7 + 0x30) = (char)uVar10;
  *(undefined1 *)(lVar7 + 0x2f) = 1;
  *(undefined1 *)(lVar7 + 0x11) = 0;
  *(long *)(lVar7 + 0x38) = (long)param_2;
  FUN_003673f0(&local_80,param_1);
  uVar14 = (ulong)*(byte *)(lVar7 + 0x21);
  if (uVar14 == 0xff) {
    bVar1 = *(byte *)(lVar7 + 0x2f);
    if ((uint)*(byte *)(lVar7 + 0x30) < bVar1 + 4) {
      uVar5 = (uint)*(byte *)(lVar7 + 0x30) * 3;
      uVar10 = 0xfffffffe;
      if (uVar5 < 0x1fe) {
        uVar10 = uVar5 >> 1;
      }
      *(char *)(lVar7 + 0x30) = (char)uVar10;
      if (bVar1 + 4 <= (uVar10 & 0xff)) {
        lVar7 = FUN_0038c7f0(lVar7,(uVar10 & 0xff) * 8 + 0x38);
        bVar1 = *(byte *)(lVar7 + 0x2f);
        goto LAB_00351454;
      }
    }
    else {
LAB_00351454:
      uVar14 = (ulong)bVar1;
      *(byte *)(lVar7 + 0x2f) = bVar1 + 4;
      if (bVar1 != 0xff) goto LAB_00351464;
    }
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    pvVar8 = (void *)FUN_00366f90(&local_60);
    free(pvVar8);
    uVar14 = (ulong)*(byte *)(lVar7 + 0x20);
    if (uVar14 != 0xff) goto LAB_00351484;
LAB_003514d8:
    if (lVar7 == 0) {
LAB_00351764:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar1 = *(byte *)(lVar7 + 0x2f);
    if ((uint)*(byte *)(lVar7 + 0x30) < bVar1 + 4) {
      uVar5 = (uint)*(byte *)(lVar7 + 0x30) * 3;
      uVar10 = 0xfffffffe;
      if (uVar5 < 0x1fe) {
        uVar10 = uVar5 >> 1;
      }
      *(char *)(lVar7 + 0x30) = (char)uVar10;
      if (bVar1 + 4 <= (uVar10 & 0xff)) {
        lVar7 = FUN_0038c7f0(lVar7,(uVar10 & 0xff) * 8 + 0x38);
        bVar1 = *(byte *)(lVar7 + 0x2f);
        goto LAB_0035152c;
      }
    }
    else {
LAB_0035152c:
      uVar14 = (ulong)bVar1;
      *(byte *)(lVar7 + 0x2f) = bVar1 + 4;
      if (bVar1 != 0xff) goto LAB_0035153c;
    }
    uStack_58 = param_3[1];
    local_60 = (void *)*param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    pvVar8 = (void *)FUN_00366f90(&local_60);
    free(pvVar8);
  }
  else {
    puVar11 = *(undefined8 **)(lVar7 + uVar14 * 8 + 0x38);
    if ((puVar11 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar11, plVar12 != (long *)0x0)) {
      do {
        lVar13 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)puVar11[3])(puVar11[4]);
      }
    }
LAB_00351464:
    *(char *)(lVar7 + 0x21) = (char)uVar14;
    lVar13 = lVar7 + uVar14 * 8;
    *(undefined8 *)(lVar13 + 0x50) = uStack_68;
    *(undefined8 *)(lVar13 + 0x48) = uStack_70;
    *(undefined8 *)(lVar13 + 0x40) = uStack_78;
    *(void **)(lVar13 + 0x38) = local_80;
    uVar14 = (ulong)*(byte *)(lVar7 + 0x20);
    if (uVar14 == 0xff) goto LAB_003514d8;
LAB_00351484:
    puVar11 = *(undefined8 **)(lVar7 + uVar14 * 8 + 0x38);
    if ((puVar11 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar11, plVar12 != (long *)0x0)) {
      do {
        lVar13 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)puVar11[3])(puVar11[4]);
      }
    }
LAB_0035153c:
    *(char *)(lVar7 + 0x20) = (char)uVar14;
    lVar13 = lVar7 + uVar14 * 8;
    uVar16 = param_3[1];
    uVar15 = *param_3;
    uVar17 = param_3[2];
    *(undefined8 *)(lVar13 + 0x50) = param_3[3];
    *(undefined8 *)(lVar13 + 0x48) = uVar17;
    *(undefined8 *)(lVar13 + 0x40) = uVar16;
    *(undefined8 *)(lVar13 + 0x38) = uVar15;
  }
  if (param_5 != 0) {
    do {
      uVar14 = *param_4;
      if (uVar14 != 0) {
        if (4 < uVar14) {
          FUN_0038da60(uVar14);
        }
        if (lVar7 == 0) goto LAB_00351764;
        bVar1 = *(byte *)(lVar7 + 0x2f);
        if ((uint)*(byte *)(lVar7 + 0x30) < bVar1 + 2) {
          uVar5 = (uint)*(byte *)(lVar7 + 0x30) * 3;
          uVar10 = 0xfffffffe;
          if (uVar5 < 0x1fe) {
            uVar10 = uVar5 >> 1;
          }
          *(char *)(lVar7 + 0x30) = (char)uVar10;
          if (bVar1 + 2 <= (uVar10 & 0xff)) {
            lVar7 = FUN_0038c7f0(lVar7,(uVar10 & 0xff) * 8 + 0x38);
            bVar1 = *(byte *)(lVar7 + 0x2f);
            goto LAB_00351604;
          }
        }
        else {
LAB_00351604:
          *(byte *)(lVar7 + 0x2f) = bVar1 + 2;
          if (bVar1 != 0xff) {
            bVar2 = *(byte *)(lVar7 + 0x2e);
            if (*(char *)(lVar7 + 0x2d) == -1) {
              if (bVar2 != 0xff) goto LAB_00351764;
              *(byte *)(lVar7 + 0x2e) = bVar1;
              *(byte *)(lVar7 + 0x2d) = bVar1;
            }
            else {
              if (bVar2 == 0xff) goto LAB_00351764;
              *(byte *)(lVar7 + (ulong)bVar2 * 8 + 0x40) = bVar1;
              *(byte *)(lVar7 + 0x2e) = bVar1;
            }
            lVar13 = lVar7 + (ulong)bVar1 * 8;
            *(ulong *)(lVar13 + 0x38) = uVar14;
            *(undefined1 *)(lVar13 + 0x40) = 0xff;
            uVar6 = (undefined4)local_60;
            *(undefined4 *)(lVar13 + 0x44) = local_60._3_4_;
            *(undefined4 *)(lVar13 + 0x41) = uVar6;
            goto LAB_00351590;
          }
        }
        if (4 < uVar14) {
          FUN_00350fd0(uVar14);
        }
      }
LAB_00351590:
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  auVar18 = FUN_0038e500(1);
  uVar10 = (uint)*(byte *)(lVar7 + 0x2c);
  if (*(byte *)(lVar7 + 0x2c) == 0xff) {
    bVar1 = *(byte *)(lVar7 + 0x2f);
    if ((uint)*(byte *)(lVar7 + 0x30) < bVar1 + 2) {
      uVar5 = (uint)*(byte *)(lVar7 + 0x30) * 3;
      uVar10 = 0xfffffffe;
      if (uVar5 < 0x1fe) {
        uVar10 = uVar5 >> 1;
      }
      *(char *)(lVar7 + 0x30) = (char)uVar10;
      if (bVar1 + 2 <= (uVar10 & 0xff)) {
        lVar7 = FUN_0038c7f0(lVar7,(uVar10 & 0xff) * 8 + 0x38);
        bVar1 = *(byte *)(lVar7 + 0x2f);
        goto LAB_003516d0;
      }
    }
    else {
LAB_003516d0:
      uVar10 = (uint)bVar1;
      *(byte *)(lVar7 + 0x2f) = bVar1 + 2;
      if (uVar10 != 0xff) goto LAB_003516e0;
    }
    if (auVar18._12_4_ < 4) {
      puVar9 = (&PTR_s__monotonic__044961c0)[(long)auVar18._8_8_ >> 0x20];
    }
    else {
      puVar9 = &DAT_03c68229;
    }
    FUN_0038d930(&local_60,"\"%s%ld.%09d\"",puVar9,auVar18._0_8_,auVar18._8_8_ & 0xffffffff);
    free(local_60);
  }
  else {
LAB_003516e0:
    *(char *)(lVar7 + 0x2c) = (char)uVar10;
    *(undefined1 (*) [16])(lVar7 + (ulong)uVar10 * 8 + 0x38) = auVar18;
  }
  *(undefined8 *)(lVar7 + 8) = 0;
  FUN_0038da50(lVar7,1);
  return lVar7;
}


