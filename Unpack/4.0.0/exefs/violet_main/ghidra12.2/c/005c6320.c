/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c6320; name: FUN_005c6320
 */


void FUN_005c6320(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[3] = (long)plVar4;
  if (param_3 != 0) {
    if (param_3 >> 0x3c != 0) {
                    /* try { // try from 005c63d0 to 005c63d7 has its CatchHandler @ 005c63d8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,param_3 * 0x10,8);
    param_1[2] = (long)(puVar5 + param_3 * 2);
    puVar1 = param_2 + param_3 * 2;
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar5;
    do {
      *puVar5 = *param_2;
      lVar6 = param_2[1];
      puVar5[1] = lVar6;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_2 = param_2 + 2;
      puVar5 = puVar5 + 2;
    } while (param_2 != puVar1);
    param_1[1] = (long)puVar5;
  }
  return;
}


