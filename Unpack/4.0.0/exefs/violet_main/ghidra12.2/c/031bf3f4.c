/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bf3f4; name: FUN_031bf3f4
 */


void FUN_031bf3f4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_046a3dd8;
  if (*(char *)((long)param_1 + 0x24c) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0xf));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0xf));
  }
  puVar3 = PTR_DAT_047d1a08;
  if (param_1[0x47] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[0x47],0);
  }
  if ((param_1[0xd] & 1) != 0) {
    (**(code **)(puVar3 + 8))(0,param_1[0xd] - 1,0);
  }
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    pcVar5 = (code *)param_1[0xc];
    if (pcVar5 == (code *)0x1) {
      plVar6 = (long *)(lVar4 + -8);
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 != 0) goto LAB_031bf4cc;
    }
    else if (pcVar5 != (code *)0x0) {
      (*pcVar5)(lVar4,0);
      goto LAB_031bf4cc;
    }
    (**(code **)(lVar4 + -0x10))(lVar4,0);
    (**(code **)(puVar3 + 8))(0,(ulong)(lVar4 + -0x10) & 0xfffffffffffffff0,0);
  }
LAB_031bf4cc:
                    /* WARNING: Could not recover jumptable at 0x031bf4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 8))(0,param_1,0);
  return;
}


