/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048a770; name: FUN_0048a770
 */


long * FUN_0048a770(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_0045c010(param_2,0);
  if (lVar2 == 0) {
    FUN_004806c0(0xb,0x83,0x77,"external/openssl/crypto/x509/x509name.c",0xfc);
    FUN_00481380(2,"name=",param_2);
    plVar4 = (long *)0x0;
  }
  else {
    if (((param_1 != (long *)0x0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) ||
       (plVar4 = (long *)FUN_0048b970(), plVar4 != (long *)0x0)) {
      FUN_003dffa0(*plVar4);
      lVar3 = FUN_0045d030(lVar2);
      *plVar4 = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_0048a880(plVar4,param_3,param_4,param_5), iVar1 == 0)) {
        if ((param_1 == (long *)0x0) || (plVar4 != (long *)*param_1)) {
          FUN_0048b980(plVar4);
        }
        plVar4 = (long *)0x0;
      }
      else if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
        *param_1 = (long)plVar4;
      }
    }
    FUN_003dffa0(lVar2);
  }
  return plVar4;
}


