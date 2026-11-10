/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01065bd4; name: FUN_01065bd4
 */


bool FUN_01065bd4(long param_1,long *param_2,undefined8 param_3,int param_4,byte param_5,
                 undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar1 != 0) {
    FUN_008daa84(lVar1,param_2);
    lVar1 = (long)param_4 * 8;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1));
    *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1) = 0;
    FUN_008d43e0("vfx system deleted the registered binary. resource id : %d.\n",param_4);
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x540,0x80);
  if (lVar1 != 0) {
    FUN_008da264(lVar1,*(undefined8 *)(param_1 + 0x38),param_2,param_3,0,0,0,param_4,param_1,
                 param_5 & 1,param_6);
    *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8) = lVar1;
  }
  return lVar1 != 0;
}


