/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fb780; name: FUN_002fb780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002fb780(long param_1,void *param_2,size_t param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  long in_x6;
  long in_x7;
  long *plVar5;
  undefined1 auStack_48 [8];
  
  uVar2 = 2;
  if ((param_1 != 0) && (in_x6 != 0)) {
    FUN_0038db40(param_1 + 0x68);
    cVar1 = *(char *)(param_1 + 0x90);
                    /* try { // try from 002fb7c4 to 002fb7cb has its CatchHandler @ 002fb8dc */
    FUN_0038db60(param_1 + 0x68);
    if (cVar1 == '\0') {
      if ((*(long *)(param_1 + 0x58) == 0) && (*(char *)(param_1 + 0x60) == '\0')) {
        plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x48);
        lVar4 = _DAT_00000008;
        if (plVar3 == (long *)0x0) {
          _DAT_00000008 = 0;
          lRam0000000000000000 = param_1;
          if (lVar4 != 0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        else {
          *plVar3 = param_1;
          plVar3[8] = 0;
          plVar3[5] = 0;
          plVar3[4] = 0;
          plVar3[7] = 0;
          plVar3[6] = 0;
          plVar3[3] = 0;
          plVar3[2] = 0;
          plVar3[1] = 0;
        }
        plVar5 = plVar3 + 1;
        plVar3[2] = param_3;
        if (param_3 != 0) {
          __dest = (void *)FUN_0038c7b0(param_3);
          lVar4 = *plVar5;
          *plVar5 = (long)__dest;
          if (lVar4 != 0) {
            FUN_0049e790(PTR_LAB_047cba48);
            __dest = (void *)*plVar5;
          }
          memcpy(__dest,param_2,param_3);
        }
        plVar3[3] = in_x6;
        plVar3[4] = in_x7;
        plVar3[6] = (long)&LAB_002fb8e0;
        plVar3[7] = (long)plVar3;
        plVar3[8] = 0;
        FUN_0035351c(auStack_48,plVar3 + 5,0);
      }
      else {
        uVar2 = FUN_002fb970(param_1,param_2,param_3,in_x6,in_x7);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar2 = 0xd;
    }
    else {
      uVar2 = 0xe;
    }
  }
  return uVar2;
}


