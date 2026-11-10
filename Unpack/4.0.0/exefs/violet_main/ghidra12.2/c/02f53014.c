/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f53014; name: FUN_02f53014
 */


void FUN_02f53014(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 local_38;
  
  param_1[2] = 0;
  param_1[4] = param_1 + 8;
  param_1[5] = 0x8000001800000000;
  param_1[0x24] = param_1 + 0x28;
  param_1[0x25] = 0x8000001800000000;
  param_1[0x22] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = param_1 + 0x48;
  param_1[0x45] = 0x8000001800000000;
  puVar5 = PTR_DAT_047d1a08;
  param_1[99] = 0;
  local_38 = 0x410;
  puVar6 = (undefined4 *)(**(code **)puVar5)(0,&local_38,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(puVar6,"Block");
  }
  plVar1 = param_1 + 99;
  lVar7 = 0x1c;
  do {
    lVar2 = lVar7 + 0x10;
    *(undefined8 *)((long)puVar6 + lVar7 + -0xc) = 0xffffff00ffffff;
    *(undefined8 *)((long)puVar6 + lVar7 + -4) = 0xffffff00ffffff;
    lVar7 = lVar2;
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
  param_1[0x65] = 0x8000000000000000;
  param_1[0x67] = 0x8000000000000000;
  param_1[0x69] = 0x8000000000000000;
  param_1[0x6b] = 0x8000000000000000;
  param_1[0x72] = 0x8000000000000000;
  param_1[0x74] = 0x8000000000000000;
  param_1[0x66] = 0;
  param_1[0x78] = param_1 + 0x7c;
  param_1[0x62] = param_1[99];
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x80000018;
  param_1[0x96] = 0;
  param_1[0x98] = param_1 + 0x9c;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000018;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0xb6] = 0xf00000006;
  return;
}


