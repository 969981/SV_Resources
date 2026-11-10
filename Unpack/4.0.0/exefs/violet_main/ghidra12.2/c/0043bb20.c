/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043bb20; name: FUN_0043bb20
 */


undefined8
FUN_0043bb20(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_48;
  int iStack_44;
  
  if (param_2 == 0) {
    return 0;
  }
  local_48 = param_1;
  iStack_44 = param_2;
  if (DAT_047f1848 != 0) {
    uVar1 = FUN_0047e200(DAT_047f1848,&local_48);
    lVar2 = FUN_0047e450(DAT_047f1848,uVar1);
    if (lVar2 != 0) goto LAB_0043bb8c;
  }
  lVar2 = FUN_0045c970(&local_48,&DAT_044a82c8,0x1d,0x18,&LAB_0043bbd0);
  if (lVar2 == 0) {
    return 0;
  }
LAB_0043bb8c:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  return 1;
}


