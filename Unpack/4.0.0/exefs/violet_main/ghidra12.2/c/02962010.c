/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02962010; name: FUN_02962010
 */


void FUN_02962010(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 == param_2) {
    local_48 = 0x8200db;
    local_4c = 0;
    local_30 = 0;
    local_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = param_2;
    iStack_44 = param_2;
    FUN_01907920(param_1,&local_50);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x68) = 1;
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3c8);
    if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
       (*(undefined4 *)(lVar2 + 0xc) = 1, *(byte *)(lVar2 + 10) == 1)) {
      *(undefined1 *)(lVar2 + 10) = 2;
    }
  }
  return;
}


