/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f7b70; name: FUN_002f7b70
 */


void FUN_002f7b70(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if (param_2 == 0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_LAB_044940d0;
      puVar5[1] = 1;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x218);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_04494108;
      puVar5[1] = 1;
      plVar1 = (long *)(param_3 + 8);
      puVar5[2] = param_2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar5[3] = param_3;
      *(undefined1 *)(puVar5 + 8) = 0;
      puVar5[0xd] = 0x100;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xc] = 0;
      puVar5[0xb] = 0;
                    /* try { // try from 002f7bec to 002f7bf3 has its CatchHandler @ 002f7c9c */
      uVar6 = FUN_0038c780(0x100);
      puVar5[0xe] = uVar6;
      puVar5[0x40] = 0;
      puVar5[0x42] = 0;
      puVar5[0x41] = 0;
                    /* try { // try from 002f7c08 to 002f7c4b has its CatchHandler @ 002f7ca4 */
      piVar7 = (int *)FUN_00343a90(param_4,"grpc.tsi.max_frame_size");
      if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
        iVar4 = FUN_00343f80(piVar7,0,0x7fffffff);
        puVar5[0x42] = (long)iVar4;
      }
      FUN_0038db00(puVar5 + 4);
      FUN_00368450(puVar5 + 0xf);
      puVar5[0x3f] = 0;
      puVar5[0x3d] = &LAB_002f7ed0;
      puVar5[0x3e] = puVar5;
    }
  }
  *param_1 = puVar5;
  return;
}


