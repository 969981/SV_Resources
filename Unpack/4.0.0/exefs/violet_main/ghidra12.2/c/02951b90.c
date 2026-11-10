/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02951b90; name: FUN_02951b90
 */


void FUN_02951b90(long param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int local_88;
  undefined2 local_84;
  undefined2 local_38;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (iVar2 == param_2) {
    FUN_0158253c(*(undefined8 *)(param_1 + 8));
    cVar1 = FUN_0124a08c();
    if ((cVar1 == param_3) && (cVar1 = FUN_0293fca0(param_1), cVar1 != param_3)) {
      memset(&local_88,0,0x50);
      local_84 = 0;
      local_38 = 0x101;
      local_88 = param_2;
      FUN_01974650(param_1,&local_88);
    }
  }
  return;
}


