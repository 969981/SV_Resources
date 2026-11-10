/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fcc98; name: FUN_013fcc98
 */


void FUN_013fcc98(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  lVar4 = param_2[4];
  uVar1 = FUN_0284ed24(param_2,param_4);
  if ((ulong)param_2[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*param_2 + 0xe8))();
  }
  FUN_0289a338(param_2,lVar2,uVar1,lVar3,param_4,param_5);
  *param_1 = param_2[4] + (lVar3 - lVar4);
  return;
}


