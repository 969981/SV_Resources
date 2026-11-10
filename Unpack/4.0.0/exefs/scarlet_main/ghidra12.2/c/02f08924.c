/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f08924; name: FUN_02f08924
 */


void FUN_02f08924(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x20] = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff00000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  param_1[0x22] = 0;
  puVar5 = PTR_DAT_047d1a08;
  local_18 = 0x410;
  puVar6 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
  pcVar7 = *(code **)(puVar5 + 0x10);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(puVar6,"Block");
  }
  plVar1 = param_1 + 0x22;
  lVar8 = 0x1c;
  do {
    lVar2 = lVar8 + 0x10;
    *(undefined8 *)((long)puVar6 + lVar8 + -0xc) = 0xffffff00ffffff;
    *(undefined8 *)((long)puVar6 + lVar8 + -4) = 0xffffff00ffffff;
    lVar8 = lVar2;
  } while (lVar2 != 0x41c);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)(puVar6 + 2) = 0;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      (**(code **)(puVar5 + 8))(0,puVar6,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = (long)puVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[0x21] = param_1[0x22];
  return;
}


