/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f58e4; name: FUN_001f58e4
 */


void FUN_001f58e4(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar1 = param_1[5];
  if ((ulong)param_1[6] < uVar1) {
    lVar7 = param_1[4];
    do {
      if (param_1[3] == 0) {
        return;
      }
      lVar3 = param_1[3] + -1;
      plVar8 = *(long **)(*param_1 + (lVar3 + param_1[2] & param_1[1]) * 8);
      lVar5 = *(long *)(*plVar8 + 0x18);
      lVar6 = *(long *)(plVar8[1] + 0x18);
      param_1[3] = lVar3;
      param_1[5] = ((uVar1 - lVar5) - lVar6) + -0x20;
      if (param_2 != 0) {
        plVar4 = (long *)(param_2 + ((ulong)*(uint *)((long)plVar8 + 0x4c) & 0x7f) * 8);
        plVar2 = (long *)*plVar4;
        if (plVar2 != (long *)0x0) {
          if (plVar2 != plVar8) {
            do {
              plVar4 = plVar2;
              plVar2 = (long *)plVar4[8];
              if (plVar2 == (long *)0x0) goto LAB_001f5990;
            } while (plVar2 != plVar8);
            plVar4 = plVar4 + 8;
          }
          *plVar4 = plVar8[8];
          plVar8[8] = 0;
        }
      }
LAB_001f5990:
      FUN_001f8300(plVar8[1]);
      FUN_001f8300(*plVar8);
      FUN_001f45b0(lVar7,plVar8);
      uVar1 = param_1[5];
    } while ((ulong)param_1[6] < uVar1);
  }
  return;
}


