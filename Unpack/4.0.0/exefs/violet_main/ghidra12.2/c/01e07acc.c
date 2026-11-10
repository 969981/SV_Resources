/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e07acc; name: FUN_01e07acc
 */


void FUN_01e07acc(undefined8 *param_1,undefined1 param_2 [16])

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float local_84;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_4c [4];
  undefined8 *local_48 [3];
  undefined1 *local_18;
  
  if (((DAT_04837608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04837608), iVar7 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar6 = DAT_048375f8;
  *param_1 = 0;
  param_1[1] = 0;
  local_18 = local_4c;
  DAT_04837610 = lVar6;
  local_4c[0] = 10;
  puVar9 = (undefined8 *)(lVar6 + 0x58);
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)(lVar6 + 0x58);
    puVar12 = (undefined8 *)*puVar9;
    do {
      if (*(byte *)(puVar12 + 4) < 0xb) {
        if (*(byte *)(puVar12 + 4) == 10) goto LAB_01e07b60;
        puVar11 = puVar12 + 1;
        puVar10 = (undefined8 *)*puVar11;
        if (puVar10 == (undefined8 *)0x0) goto LAB_01e07b60;
      }
      else {
        puVar10 = (undefined8 *)*puVar12;
        puVar11 = puVar12;
        if (puVar10 == (undefined8 *)0x0) {
          goto LAB_01e07b60;
        }
      }
      puVar12 = puVar10;
    } while( true );
  }
  puVar12 = puVar9;
  puVar11 = puVar9;
LAB_01e07b60:
  plVar1 = (long *)(lVar6 + 0x50);
  puVar10 = (undefined8 *)*puVar11;
  if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
    FUN_01e028e0(local_48,plVar1,&local_18);
    *local_48[0] = 0;
    local_48[0][1] = 0;
    local_48[0][2] = puVar12;
    *puVar11 = local_48[0];
    puVar12 = local_48[0];
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar12 = (undefined8 *)*puVar11;
    }
    FUN_010108e0(*(undefined8 *)(lVar6 + 0x58),puVar12);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar10 = local_48[0];
  }
  puVar11 = (undefined8 *)puVar10[6];
  local_84 = 3.4028235e+38;
  do {
    local_18 = local_4c;
    local_4c[0] = 10;
    puVar12 = (undefined8 *)*puVar9;
    if (puVar12 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)(lVar6 + 0x58);
      do {
        if (*(byte *)(puVar12 + 4) < 0xb) {
          if (*(byte *)(puVar12 + 4) == 10) goto LAB_01e07bcc;
          puVar10 = puVar12 + 1;
          puVar14 = (undefined8 *)*puVar10;
          if ((undefined8 *)*puVar10 == (undefined8 *)0x0) goto LAB_01e07bcc;
        }
        else {
          puVar10 = puVar12;
          if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
            goto LAB_01e07bcc;
          }
          puVar14 = (undefined8 *)*puVar12;
        }
        puVar12 = puVar14;
      } while( true );
    }
    puVar12 = puVar9;
    puVar10 = puVar9;
LAB_01e07bcc:
    local_60 = param_2._0_4_;
    fStack_5c = param_2._4_4_;
    fStack_58 = param_2._8_4_;
    puVar14 = (undefined8 *)*puVar10;
    if ((undefined8 *)*puVar10 == (undefined8 *)0x0) {
      FUN_01e028e0(local_48,plVar1,&local_18);
      *local_48[0] = 0;
      local_48[0][1] = 0;
      local_48[0][2] = puVar12;
      *puVar10 = local_48[0];
      puVar12 = local_48[0];
      if (*(long *)*plVar1 != 0) {
        *plVar1 = *(long *)*plVar1;
        puVar12 = (undefined8 *)*puVar10;
      }
      FUN_010108e0(*(undefined8 *)(lVar6 + 0x58),puVar12);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar14 = local_48[0];
    }
    if (puVar14 + 5 == puVar11) {
      return;
    }
    lVar13 = puVar11[2];
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar13 + 0x1a);
      sVar8 = *(short *)(lVar13 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e07e00;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e07e00:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar13 + 0x10) != 0) {
            plVar15 = (long *)(*(long *)(lVar13 + 0x10) + -0x28);
            lVar13 = (**(code **)(*plVar15 + 0x68))(plVar15);
            local_60 = *(float *)(lVar13 + 0x30) - local_60;
            fStack_5c = *(float *)(lVar13 + 0x34) - fStack_5c;
            fStack_58 = *(float *)(lVar13 + 0x38) - fStack_58;
            local_60 = local_60 * local_60;
            fStack_5c = fStack_5c * fStack_5c;
            fStack_58 = fStack_58 * fStack_58;
            auVar17._0_4_ = local_60 + fStack_5c;
            auVar17._4_4_ = fStack_58 + 0.0;
            auVar17._8_4_ = local_60 + fStack_5c;
            auVar17._12_4_ = fStack_58 + 0.0;
            auVar17 = NEON_ext(auVar17,auVar17,4,1);
            fVar16 = auVar17._0_4_ + auVar17._4_4_;
            if (fVar16 < local_84) {
              FUN_00d0a71c(param_1,puVar11 + 2);
              local_84 = fVar16;
            }
            (**(code **)(*plVar15 + 0x60))(plVar15);
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    puVar11 = (undefined8 *)puVar11[1];
  } while( true );
}


