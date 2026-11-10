/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026f160; name: FUN_0026f160
 */


bool FUN_0026f160(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [3];
  undefined8 local_38;
  
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    do {
      local_70 = 0;
      local_68 = FUN_01cf7e20();
      uStack_60 = 0;
                    /* try { // try from 0026f1b0 to 0026f1f7 has its CatchHandler @ 0026f280 */
      local_78 = &local_70;
      puVar2 = (undefined8 *)FUN_0026f298(param_1,&local_38,lVar3);
      puVar4 = (undefined8 *)*puVar2;
      if (puVar4 == (undefined8 *)0x0) {
        FUN_0026f3b0(local_58,param_1,lVar3,&local_78);
        local_58[0][2] = local_38;
        *local_58[0] = 0;
        local_58[0][1] = 0;
        *puVar2 = local_58[0];
        puVar4 = local_58[0];
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          puVar4 = (undefined8 *)*puVar2;
        }
        FUN_010108e0(param_1[1],puVar4);
        puVar4 = local_58[0];
        param_1[3] = param_1[3] + 1;
        FUN_0026f618(&local_78,local_70);
      }
      else {
        FUN_0026f618(&local_78,local_70);
        if (puVar4[0xb] == 0) {
          return false;
        }
      }
      lVar3 = lVar3 + 0x20;
      param_1 = puVar4 + 8;
    } while (lVar1 != lVar3);
  }
  return param_1[3] == 0;
}


