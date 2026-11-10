/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00366600; name: FUN_00366600
 */


void FUN_00366600(undefined8 *param_1,byte *param_2,long param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  byte local_54 [4];
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 uStack_38;
  
  FUN_003670f0(&local_50,param_3);
  lVar7 = (long)&uStack_48 + 1;
  if (local_50 != (undefined8 *)0x0) {
    lVar7 = local_40;
  }
  if (param_3 == 0) {
    lVar4 = 0;
    goto joined_r0x003667bc;
  }
  lVar8 = 0;
  lVar4 = 0;
  lVar9 = lVar8;
  if (param_4 == 0) {
    do {
      bVar6 = *param_2;
      if (-1 < (char)bVar6) {
        if ((&DAT_03cd76e7)[bVar6] == 0xff) {
          if ((bVar6 != 0xd) && (bVar6 != 10)) goto switchD_003668f0_caseD_1;
        }
        else {
          local_54[lVar9] = (&DAT_03cd76e7)[bVar6];
          if (lVar9 + 1 == 4) {
            if ((local_54[0] == 0x7f) || (local_54[1] == 0x7f)) goto switchD_003668f0_caseD_1;
            if (local_54[2] == 0x7f) {
              if (local_54[3] != 0x7f) goto switchD_003668f0_caseD_1;
              *(byte *)(lVar7 + lVar4) = local_54[1] >> 4 | local_54[0] << 2;
              lVar4 = lVar4 + 1;
              lVar9 = 0;
            }
            else if (local_54[3] == 0x7f) {
              pbVar1 = (byte *)(lVar7 + lVar4);
              lVar4 = lVar4 + 2;
              *pbVar1 = (byte)(((uint)local_54[1] << 4) >> 8) |
                        (byte)(((uint)local_54[0] << 10) >> 8);
              pbVar1[1] = (byte)((uint)local_54[1] << 4) | local_54[2] >> 2;
              lVar9 = 0;
            }
            else {
              pbVar1 = (byte *)(lVar7 + lVar4);
              *pbVar1 = (byte)(((uint)local_54[1] << 0xc) >> 0x10) |
                        (byte)(((uint)local_54[0] << 0x12) >> 0x10);
              pbVar1[1] = (byte)(((uint)local_54[2] << 6) >> 8) |
                          (byte)(((uint)local_54[1] << 0xc) >> 8);
              lVar4 = lVar4 + 3;
              pbVar1[2] = local_54[3] | (byte)((uint)local_54[2] << 6);
              lVar9 = 0;
            }
          }
          else {
            lVar9 = lVar9 + 1;
          }
        }
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  else {
    do {
      bVar6 = *param_2;
      uVar10 = (uint)(char)bVar6;
      lVar9 = lVar8;
      if (-1 < (char)bVar6) {
        if (bVar6 < 0x2f) {
          lVar11 = 0x2b;
          if (bVar6 != 0x2d) {
            if (bVar6 != 0x2b) goto LAB_00366720;
            goto switchD_003668f0_caseD_1;
          }
LAB_003666b0:
          uVar10 = (uint)lVar11;
          bVar6 = (&DAT_03cd76e7)[lVar11];
        }
        else {
          if (bVar6 == 0x5f) {
            lVar11 = 0x2f;
            goto LAB_003666b0;
          }
          if (bVar6 == 0x2f) goto switchD_003668f0_caseD_1;
LAB_00366720:
          bVar6 = (&DAT_03cd76e7)[bVar6];
        }
        if (bVar6 == 0xff) {
          if ((uVar10 != 10) && ((uVar10 & 0xff) != 0xd)) goto switchD_003668f0_caseD_1;
        }
        else {
          lVar9 = lVar8 + 1;
          local_54[lVar8] = bVar6;
          if (lVar9 == 4) {
            if ((local_54[0] == 0x7f) || (local_54[1] == 0x7f)) goto switchD_003668f0_caseD_1;
            if (local_54[2] == 0x7f) {
              if (local_54[3] != 0x7f) goto switchD_003668f0_caseD_1;
              lVar9 = 0;
              *(byte *)(lVar7 + lVar4) = local_54[1] >> 4 | local_54[0] << 2;
              lVar4 = lVar4 + 1;
            }
            else if (local_54[3] == 0x7f) {
              pbVar1 = (byte *)(lVar7 + lVar4);
              lVar4 = lVar4 + 2;
              *pbVar1 = (byte)(((uint)local_54[1] << 4) >> 8) |
                        (byte)(((uint)local_54[0] << 10) >> 8);
              lVar9 = 0;
              pbVar1[1] = (byte)((uint)local_54[1] << 4) | local_54[2] >> 2;
            }
            else {
              pbVar1 = (byte *)(lVar7 + lVar4);
              lVar9 = 0;
              lVar4 = lVar4 + 3;
              pbVar1[1] = (byte)(((uint)local_54[2] << 6) >> 8) |
                          (byte)(((uint)local_54[1] << 0xc) >> 8);
              *pbVar1 = (byte)(((uint)local_54[1] << 0xc) >> 0x10) |
                        (byte)(((uint)local_54[0] << 0x12) >> 0x10);
              pbVar1[2] = local_54[3] | (byte)((uint)local_54[2] << 6);
            }
          }
        }
      }
      param_3 = param_3 + -1;
      lVar8 = lVar9;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  if (lVar9 == 0) goto joined_r0x003667bc;
  switch(lVar9) {
  case 2:
LAB_003668fc:
    *(byte *)(lVar7 + lVar4) = local_54[1] >> 4 | local_54[0] << 2;
    lVar4 = lVar4 + 1;
    goto joined_r0x003667bc;
  case 3:
    *(byte *)(lVar7 + lVar4) =
         (byte)(((uint)local_54[1] << 4) >> 8) | (byte)(((uint)local_54[0] << 10) >> 8);
    bVar6 = (byte)((uint)local_54[1] << 4) | local_54[2] >> 2;
LAB_0036693c:
    lVar7 = lVar7 + lVar4;
    lVar4 = lVar4 + 2;
    *(byte *)(lVar7 + 1) = bVar6;
joined_r0x003667bc:
    if (local_50 == (undefined8 *)0x0) {
      uStack_48 = CONCAT71(uStack_48._1_7_,(char)lVar4);
    }
    else {
      uStack_48 = lVar4;
    }
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = local_40;
    break;
  case 4:
    if ((local_54[0] != 0x7f) && (local_54[1] != 0x7f)) {
      if (local_54[2] != 0x7f) {
        if (local_54[3] != 0x7f) {
          pbVar1 = (byte *)(lVar7 + lVar4);
          *pbVar1 = (byte)(((uint)local_54[1] << 0xc) >> 0x10) |
                    (byte)(((uint)local_54[0] << 0x12) >> 0x10);
          lVar4 = lVar4 + 3;
          pbVar1[1] = (byte)(((uint)local_54[2] << 6) >> 8) |
                      (byte)(((uint)local_54[1] << 0xc) >> 8);
          pbVar1[2] = local_54[3] | (byte)((uint)local_54[2] << 6);
          goto joined_r0x003667bc;
        }
        *(byte *)(lVar7 + lVar4) =
             (byte)(((uint)local_54[1] << 4) >> 8) | (byte)(((uint)local_54[0] << 10) >> 8);
        bVar6 = (byte)((uint)local_54[1] << 4) | local_54[2] >> 2;
        goto LAB_0036693c;
      }
      if (local_54[3] == 0x7f) goto LAB_003668fc;
    }
  case 1:
switchD_003668f0_caseD_1:
    if ((local_50 != (undefined8 *)0x0) && (plVar5 = (long *)*local_50, plVar5 != (long *)0x0)) {
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)local_50[3])(local_50[4]);
      }
    }
    FUN_00367020(param_1);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


