/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cb4e0; name: FUN_002cb4e0
 */


undefined8 FUN_002cb4e0(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  char *local_60 [4];
  
  puVar16 = param_1 + 1;
  puVar11 = (ulong *)*puVar16;
  puVar2 = puVar16;
  if ((*param_1 & 1) != 0) {
    puVar2 = puVar11;
  }
  uVar9 = puVar2[3];
  if (1 < uVar9) {
    if ((*param_1 & 1) == 0) {
      uVar12 = param_1[4] >> 1;
      puVar11 = param_1 + 5;
      if ((param_1[4] & 1) != 0) {
        puVar11 = (ulong *)param_1[5];
      }
      if (uVar12 != 0) {
        lVar10 = 0;
        do {
          if ((*(byte *)((long)puVar11 + lVar10) & 1) == 0) {
            if ((*(byte *)((long)puVar11 + lVar10) & 0xfe) == 0x1c) {
              pbVar8 = (byte *)((long)puVar11 + lVar10 + 1);
LAB_002cb5d8:
              if (*(long *)pbVar8 == 0x645f656c676f6f67 &&
                  *(long *)(pbVar8 + 6) == 0x746c75616665645f) goto LAB_002cb768;
            }
          }
          else if (*(long *)((long)puVar11 + lVar10 + 8) == 0xe) {
            pbVar8 = *(byte **)((long)puVar11 + lVar10 + 0x10);
            goto LAB_002cb5d8;
          }
          puVar14 = puVar2 + 4;
          if ((uVar9 & 1) != 0) {
            puVar14 = (ulong *)puVar2[4];
          }
          if ((*(byte *)((long)puVar14 + lVar10) & 1) == 0) {
            if ((*(byte *)((long)puVar14 + lVar10) & 0xfe) == 8) {
              pbVar8 = (byte *)((long)puVar14 + lVar10 + 1);
LAB_002cb58c:
              if (*(int *)pbVar8 == 0x656b6166) goto LAB_002cb770;
            }
          }
          else if (*(long *)((long)puVar14 + lVar10 + 8) == 4) {
            pbVar8 = *(byte **)((long)puVar14 + lVar10 + 0x10);
            goto LAB_002cb58c;
          }
          lVar10 = lVar10 + 0x68;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar12 = puVar11[3] >> 1;
      if (uVar12 != 0) {
        lVar10 = 0;
        uVar13 = 0;
        do {
          puVar14 = puVar11 + 4;
          if ((puVar11[3] & 1) != 0) {
            puVar14 = (ulong *)puVar11[4];
          }
          if ((*(byte *)((long)puVar14 + lVar10) & 1) == 0) {
            if ((*(byte *)((long)puVar14 + lVar10) & 0xfe) == 0x1c) {
              pbVar8 = (byte *)((long)puVar14 + lVar10 + 1);
LAB_002cb6d4:
              if (*(long *)pbVar8 == 0x645f656c676f6f67 &&
                  *(long *)(pbVar8 + 6) == 0x746c75616665645f) goto LAB_002cb768;
            }
          }
          else if (*(long *)((long)puVar14 + lVar10 + 8) == 0xe) {
            pbVar8 = *(byte **)((long)puVar14 + lVar10 + 0x10);
            goto LAB_002cb6d4;
          }
          puVar14 = puVar2 + 4;
          if ((uVar9 & 1) != 0) {
            puVar14 = (ulong *)puVar2[4];
          }
          if ((*(byte *)((long)puVar14 + lVar10) & 1) == 0) {
            if ((*(byte *)((long)puVar14 + lVar10) & 0xfe) == 8) {
              pbVar8 = (byte *)((long)puVar14 + lVar10 + 1);
LAB_002cb678:
              if (*(int *)pbVar8 == 0x656b6166) goto LAB_002cb770;
            }
          }
          else if (*(long *)((long)puVar14 + lVar10 + 8) == 4) {
            pbVar8 = *(byte **)((long)puVar14 + lVar10 + 0x10);
            goto LAB_002cb678;
          }
          uVar13 = uVar13 + 1;
          lVar10 = lVar10 + 0x68;
        } while (uVar13 < uVar12);
      }
    }
    goto LAB_002cb7c0;
  }
                    /* try { // try from 002cb51c to 002cb75f has its CatchHandler @ 002cb87c */
  puVar5 = (undefined8 *)FUN_002ed9b0(param_2);
  if (puVar5 == (undefined8 *)0x0) {
    if ((*param_1 & 1) != 0) {
      puVar16 = (ulong *)param_1[1];
    }
    if ((*puVar16 & 1) == 0) {
      pbVar8 = (byte *)((long)puVar16 + 1);
    }
    else {
      pbVar8 = (byte *)puVar16[2];
    }
    uVar6 = FUN_00305820(pbVar8,param_2,0);
    return uVar6;
  }
  puVar15 = (undefined8 *)0x0;
  goto LAB_002cb780;
LAB_002cb768:
                    /* try { // try from 002cb768 to 002cb773 has its CatchHandler @ 002cb874 */
  puVar15 = (undefined8 *)FUN_002ee130();
  goto LAB_002cb774;
LAB_002cb770:
  puVar15 = (undefined8 *)FUN_002edb50();
LAB_002cb774:
  puVar5 = puVar15;
  if (puVar15 == (undefined8 *)0x0) {
LAB_002cb7c0:
                    /* try { // try from 002cb7c0 to 002cb7eb has its CatchHandler @ 002cb880 */
    FUN_003673f0(local_60,"no supported credential types found");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_channel_secure.cc"
                         ,0x55,local_60,0,0);
    uVar7 = 0;
    *param_3 = uVar6;
  }
  else {
LAB_002cb780:
    local_60[0] = "grpc.channel_credentials";
                    /* try { // try from 002cb78c to 002cb79b has its CatchHandler @ 002cb878 */
    uVar6 = FUN_003438e0(param_2,local_60,1);
    if ((*param_1 & 1) != 0) {
      puVar16 = (ulong *)param_1[1];
    }
    if ((*puVar16 & 1) == 0) {
      pbVar8 = (byte *)((long)puVar16 + 1);
    }
    else {
      pbVar8 = (byte *)puVar16[2];
    }
                    /* try { // try from 002cb7fc to 002cb817 has its CatchHandler @ 002cb884 */
    uVar7 = FUN_002eaca0(puVar5,pbVar8,uVar6,0);
    FUN_00343d90(uVar6);
    if (puVar15 != (undefined8 *)0x0) {
      plVar1 = puVar15 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)*puVar15)(puVar15);
        FUN_0049e790(PTR_LAB_047cba48,puVar15);
      }
    }
  }
  return uVar7;
}


