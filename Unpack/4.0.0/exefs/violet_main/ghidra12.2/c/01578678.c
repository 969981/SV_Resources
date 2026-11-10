/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01578678; name: FUN_01578678
 */


long * FUN_01578678(byte *param_1,int param_2,uint param_3,uint *param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = ((param_2 + param_3) - 1) / param_3;
  }
  *param_5 = 0;
  *param_4 = uVar5 * param_3;
  lVar2 = FUN_01578780(0xf,uVar5 * param_3 + 0x78);
  if (lVar2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    if (param_1 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      bVar3 = *param_1;
      uVar5 = 0x811c9dc5;
      if (bVar3 != 0) {
        do {
          param_1 = param_1 + 1;
          bVar1 = bVar3 + 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar1 = bVar3;
          }
          uVar5 = uVar5 * 0x1000193 ^ (uint)bVar1;
          bVar3 = *param_1;
        } while (bVar3 != 0);
      }
    }
    plVar4 = (long *)(lVar2 + (ulong)*param_4);
    *plVar4 = (long)(PTR_DAT_047e2fd8 + 0x10);
    plVar4[1] = 0;
    FUN_0157878c(plVar4 + 2);
    *(undefined4 *)(plVar4 + 10) = 1;
    *(uint *)(plVar4 + 8) = uVar5;
    *(int *)((long)plVar4 + 0x44) = param_2;
    plVar4[9] = lVar2;
    *plVar4 = (long)&PTR_LAB_04602dd0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0;
    *param_5 = lVar2;
  }
  return plVar4;
}


