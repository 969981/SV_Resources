/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d5494; name: FUN_030d5494
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d5494(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_28;
  
  param_1[0xd] = 0x3c23d70a3ca3d70a;
  *(undefined4 *)((long)param_1 + 100) = 0x3effffff;
  *(undefined4 *)(param_1 + 0xe) = 0x3c23d70a;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x3727c5ac3fc25c20;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x38d1b717;
  puVar1 = PTR_DAT_047e51a0 + 0x10;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  param_1[0x18] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  param_1[0x1c] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *param_1 = (long)puVar1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x3a83126f;
  param_1[10] = 0x3dcccccd3f000000;
  param_1[0xb] = -0x80001180800012;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x3f000000;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f7f069ebf000001;
  lVar4 = _UNK_03caa5b8;
  lVar8 = _DAT_03caa5b0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f7d8235;
  param_1[9] = lVar4;
  param_1[8] = lVar8;
  puVar1 = PTR_DAT_047d1a08;
  param_1[0x1e] = 0;
  local_28 = 0x38;
  plVar5 = (long *)(**(code **)puVar1)(0,&local_28,0);
  pcVar7 = *(code **)(puVar1 + 0x10);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(plVar5,"hkaiModifiedSections");
  }
  plVar5[6] = 0;
  puVar1 = PTR_DAT_047e51a8 + 0x10;
  plVar5[2] = 1;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = -0x8000000000000000;
  plVar5[5] = (long)&DAT_03d7702c;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0xffffffff;
  plVar6 = (long *)param_1[0x1e];
  param_1[0x1e] = (long)plVar5;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar5 = plVar6 + 2;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return;
}


