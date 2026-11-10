/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00354970; name: FUN_00354970
 */


void FUN_00354970(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  size_t sVar8;
  undefined8 *__ptr;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  char *local_68;
  
  FUN_0038ed44(&local_68,&PTR_s_grpc_poll_strategy_044962f0);
  pcVar12 = local_68;
  pcVar6 = strchr(local_68,0x2c);
  if (pcVar6 == (char *)0x0) {
    lVar10 = 0;
    lVar14 = 0;
    sVar8 = strlen(pcVar12);
  }
  else {
    lVar10 = 0;
    lVar14 = 0;
    lVar11 = 8;
    do {
      sVar8 = (long)pcVar6 - (long)pcVar12;
      if (pcVar6 < pcVar12) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00354ed8 to 00354edf has its CatchHandler @ 00354ee4 */
        abort();
      }
                    /* try { // try from 003549d0 to 003549d3 has its CatchHandler @ 00354ef0 */
      pvVar7 = (void *)FUN_0038c780(sVar8 + 1);
      memcpy(pvVar7,pcVar12,sVar8);
      *(undefined1 *)((long)pvVar7 + sVar8) = 0;
                    /* try { // try from 003549e8 to 003549f3 has its CatchHandler @ 00354ef0 */
      lVar10 = FUN_0038c7f0(lVar10,lVar11);
      pcVar12 = pcVar6 + 1;
      *(void **)(lVar10 + lVar14 * 8) = pvVar7;
      lVar14 = lVar14 + 1;
      pcVar6 = strchr(pcVar12,0x2c);
      lVar11 = lVar11 + 8;
    } while (pcVar6 != (char *)0x0);
    sVar8 = strlen(pcVar12);
  }
  if ((long)sVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00354e04 to 00354e07 has its CatchHandler @ 00354ee4 */
    abort();
  }
                    /* try { // try from 00354a34 to 00354a37 has its CatchHandler @ 00354ee4 */
  pvVar7 = (void *)FUN_0038c780(sVar8 + 1);
  uVar1 = lVar14 + 1;
  memcpy(pvVar7,pcVar12,sVar8);
  *(undefined1 *)((long)pvVar7 + sVar8) = 0;
                    /* try { // try from 00354a54 to 00354a5b has its CatchHandler @ 00354ee4 */
  __ptr = (undefined8 *)FUN_0038c7f0(lVar10,uVar1 * 8);
  __ptr[lVar14] = pvVar7;
  if ((uVar1 == 0) || (DAT_047ef690 != 0)) {
    if (uVar1 == 0) goto LAB_00354e98;
  }
  else {
    uVar15 = 0;
    do {
      pcVar3 = DAT_04496308;
      puVar2 = PTR_s_head_custom_04496300;
      pcVar12 = (char *)__ptr[uVar15];
      if ((DAT_04496308 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
                    /* try { // try from 00354ae0 to 00354dd3 has its CatchHandler @ 00354ee8 */
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 == 0) goto LAB_00354aec;
        ppuVar9 = &PTR_s_head_custom_04496300;
LAB_00354e70:
        DAT_047ef688 = *ppuVar9;
        break;
      }
LAB_00354aec:
      pcVar3 = DAT_04496318;
      puVar2 = PTR_s_head_custom_04496310;
      if ((DAT_04496318 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_head_custom_04496310;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496328;
      puVar2 = PTR_s_head_custom_04496320;
      if ((DAT_04496328 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_head_custom_04496320;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496338;
      puVar2 = PTR_s_head_custom_04496330;
      if ((DAT_04496338 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_head_custom_04496330;
          goto LAB_00354e70;
        }
      }
      puVar4 = PTR_FUN_04496348;
      puVar2 = PTR_DAT_04496340;
      if ((PTR_FUN_04496348 != (undefined *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*(code *)puVar4)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_DAT_04496340;
          goto LAB_00354e70;
        }
      }
      puVar4 = PTR_FUN_04496358;
      puVar2 = PTR_DAT_04496350;
      if ((PTR_FUN_04496358 != (undefined *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*(code *)puVar4)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_DAT_04496350;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496368;
      puVar2 = PTR_s_tail_custom_04496360;
      if ((DAT_04496368 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_tail_custom_04496360;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496378;
      puVar2 = PTR_s_tail_custom_04496370;
      if ((DAT_04496378 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_tail_custom_04496370;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496388;
      puVar2 = PTR_s_tail_custom_04496380;
      if ((DAT_04496388 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_tail_custom_04496380;
          goto LAB_00354e70;
        }
      }
      pcVar3 = DAT_04496398;
      puVar2 = PTR_s_tail_custom_04496390;
      if ((DAT_04496398 != (code *)0x0) &&
         ((iVar5 = strcmp(pcVar12,"all"), iVar5 == 0 || (iVar5 = strcmp(pcVar12,puVar2), iVar5 == 0)
          ))) {
        iVar5 = strcmp(pcVar12,puVar2);
        DAT_047ef690 = (*pcVar3)(iVar5 == 0);
        if (DAT_047ef690 != 0) {
          ppuVar9 = &PTR_s_tail_custom_04496390;
          goto LAB_00354e70;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar1);
  }
  lVar14 = lVar14 + 1;
  puVar13 = __ptr;
  do {
                    /* try { // try from 00354e88 to 00354e8b has its CatchHandler @ 00354eec */
    free((void *)*puVar13);
    lVar14 = lVar14 + -1;
    puVar13 = puVar13 + 1;
  } while (lVar14 != 0);
LAB_00354e98:
                    /* try { // try from 00354e98 to 00354e9f has its CatchHandler @ 00354ee4 */
  free(__ptr);
  pcVar12 = local_68;
  if (DAT_047ef690 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_68 = (char *)0x0;
  if (pcVar12 != (char *)0x0) {
                    /* try { // try from 00354eb4 to 00354eb7 has its CatchHandler @ 00354ee0 */
    free(pcVar12);
  }
  return;
}


