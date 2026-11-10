/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054b8ec; name: FUN_0054b8ec
 */


void FUN_0054b8ec(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047cc0c8 + 0x10);
  uVar2 = FUN_01cf7e20();
  FUN_01e9fa84(param_1 + 1,uVar2);
  plVar1 = param_1 + 3;
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  param_1[5] = 0;
  plVar3 = (long *)FUN_01cf7e20();
  param_1[6] = (long)plVar3;
  if (param_2 != param_3) {
    while( true ) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x40,8);
      *plVar3 = 0;
                    /* try { // try from 0054b968 to 0054b973 has its CatchHandler @ 0054b9bc */
      FUN_00246eb0(plVar3 + 2,param_1,param_2);
      plVar3[1] = (long)plVar1;
      lVar4 = param_1[3];
      *plVar3 = lVar4;
      *(long **)(lVar4 + 8) = plVar3;
      param_1[3] = (long)plVar3;
      param_1[5] = param_1[5] + 1;
      if (param_3 + -0x10 == param_2) break;
      plVar3 = (long *)param_1[6];
      param_2 = param_2 + 0x10;
    }
  }
  return;
}


