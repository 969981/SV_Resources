/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054b294; name: FUN_0054b294
 */


void FUN_0054b294(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined8 *puVar10;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar15 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar15;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = (long)(puVar6 + 2);
  }
  else {
    lVar13 = (long)puVar6 - *param_1 >> 4;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 3;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar7 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 4,8);
    }
    uVar15 = *param_2;
    puVar6 = (undefined8 *)(lVar7 + lVar13 * 0x10);
    puVar9 = puVar6 + 2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar15;
    *param_2 = 0;
    param_2[1] = 0;
    puVar12 = (undefined8 *)*param_1;
    puVar5 = puVar6;
    puVar10 = (undefined8 *)param_1[1];
    if ((undefined8 *)param_1[1] == puVar12) {
      puVar5 = puVar12;
    }
    else {
      do {
        puVar11 = puVar10 + -2;
        uVar15 = *puVar11;
        puVar6 = puVar5 + -2;
        puVar5[-1] = puVar10[-1];
        *puVar6 = uVar15;
        *puVar11 = 0;
        puVar10[-1] = 0;
        puVar5 = puVar6;
        puVar10 = puVar11;
      } while (puVar12 != puVar11);
      puVar12 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)param_1[1];
    }
    lVar13 = param_1[2];
    param_1[2] = lVar7 + uVar1 * 0x10;
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar9;
    while (puVar5 != puVar12) {
      plVar14 = (long *)puVar5[-1];
      puVar5 = puVar5 + -2;
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0054b3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar12,lVar13 - (long)puVar12,8)
      ;
      return;
    }
  }
  return;
}


