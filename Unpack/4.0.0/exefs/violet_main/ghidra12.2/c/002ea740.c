/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ea740; name: FUN_002ea740
 */


void FUN_002ea740(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined *puVar4;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  
  if (param_2 - 0x20U < 0x5f) {
    pvVar3 = memchr("[]^-\\",param_2,6);
    if (pvVar3 != (void *)0x0) {
      FUN_0021d540(param_1,&DAT_03c0f511,1);
    }
    FUN_002ce498(param_1,1,param_2);
    return;
  }
  switch(param_2) {
  case 9:
    puVar4 = &DAT_03c54566;
    break;
  case 10:
    puVar4 = &DAT_03ca3bb7;
    break;
  default:
    if (param_2 < 0x100) {
      FUN_002eab00(local_38,"\\x%02x",param_2);
      uVar1 = (ulong)(local_38[0] >> 1);
      uVar2 = (ulong)local_38 | 1;
      if ((local_38[0] & 1) != 0) {
        uVar1 = local_30;
        uVar2 = local_28;
      }
                    /* try { // try from 002ea854 to 002ea85b has its CatchHandler @ 002ea8c8 */
      FUN_0021d540(param_1,uVar2,uVar1);
    }
    else {
      FUN_002eab00(local_38,"\\x{%x}",param_2);
      uVar1 = (ulong)(local_38[0] >> 1);
      uVar2 = (ulong)local_38 | 1;
      if ((local_38[0] & 1) != 0) {
        uVar1 = local_30;
        uVar2 = local_28;
      }
                    /* try { // try from 002ea894 to 002ea89b has its CatchHandler @ 002ea8c4 */
      FUN_0021d540(param_1,uVar2,uVar1);
    }
    if ((local_38[0] & 1) == 0) {
      return;
    }
    FUN_0049e790(PTR_LAB_047cba48,local_28);
    return;
  case 0xc:
    puVar4 = &DAT_03c24ccf;
    break;
  case 0xd:
    puVar4 = &DAT_03c32805;
  }
  FUN_0021d540(param_1,puVar4,2);
  return;
}


