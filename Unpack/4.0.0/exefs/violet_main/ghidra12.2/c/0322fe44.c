/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322fe44; name: FUN_0322fe44
 */


void FUN_0322fe44(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_2f0;
  ulong local_2e8;
  undefined4 local_260;
  undefined1 local_258 [300];
  undefined1 auStack_12c [220];
  
  *param_1 = &PTR_FUN_046ab130;
  uVar1 = (ulong)*(uint *)(param_1 + 0xd);
  if ((int)*(uint *)(param_1 + 0xd) < 1) {
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar7 = 1;
    do {
      lVar3 = *(long *)(param_1[0xc] + lVar6 * 8);
      if (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x68);
        lVar4 = lVar2 + lVar4;
        lVar5 = lVar5 + lVar2 * *(long *)(lVar3 + 8);
        FUN_031ce688(lVar3);
        if (lVar3 + 0x70 == param_1[0xe]) {
          param_1[0xe] = lVar3;
        }
        uVar1 = (ulong)*(int *)(param_1 + 0xd);
        if (lVar6 + 1 < (long)uVar1) {
          lVar2 = lVar7;
          do {
            if (*(long *)(param_1[0xc] + lVar2 * 8) == lVar3) {
              *(undefined8 *)(param_1[0xc] + lVar2 * 8) = 0;
              uVar1 = (ulong)*(uint *)(param_1 + 0xd);
            }
            lVar2 = lVar2 + 1;
          } while ((int)lVar2 < (int)uVar1);
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar6 < (int)uVar1);
  }
  lVar7 = param_1[9];
  lVar6 = *(long *)(lVar7 + 0x28);
  lVar7 = *(long *)(lVar7 + 0x80) - *(long *)(lVar7 + 0x88);
  lVar4 = lVar7 + lVar4;
  (*(code *)**(undefined8 **)param_1[10])();
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_1[10],0x10);
  (*(code *)**(undefined8 **)param_1[9])();
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_1[9],0x90);
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_1[0xb],0x148);
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_1[0xc],0x148);
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_1[0x10],0x11f0);
  if (lVar4 != 0) {
    memcpy(auStack_12c,
           "\n**************************************************************\n* Leaks Detected:\n* \tFreeListAllocator has %llu outstanding bytes over %llu allocations\n**************************************************************\n\n"
           ,0xd9);
    local_2f0 = local_258;
    local_258[0] = 0;
    local_260 = 0;
    local_2e8 = 0x8000012900000001;
    FUN_031c6c18(&local_2f0,auStack_12c,lVar5 + lVar7 * lVar6,lVar4);
    printf("%s",local_2f0);
    fflush(*(FILE **)PTR_stdout_047cb860);
    uVar1 = local_2e8;
    local_2e8 = local_2e8 & 0xffffffff00000000;
    if ((-1 < (long)uVar1) && (local_2f0 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 2));
  return;
}


