/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943ee0; name: FUN_02943ee0
 */


void FUN_02943ee0(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  FUN_02943028(*(undefined8 *)(param_1 + 0x30));
  lVar2 = FUN_02943030();
  iVar1 = *(int *)(lVar2 + 0x40);
  switch(iVar1) {
  case 0:
    puVar3 = (undefined4 *)(lVar2 + 0x44);
    break;
  case 1:
    puVar3 = (undefined4 *)(lVar2 + 0x48);
    break;
  case 2:
    puVar3 = (undefined4 *)(lVar2 + 0x4c);
    break;
  case 3:
    puVar3 = (undefined4 *)(lVar2 + 0x50);
    break;
  case 4:
    puVar3 = (undefined4 *)(lVar2 + 0x54);
    break;
  default:
    goto switchD_02943f30_default;
  }
  *puVar3 = param_2;
  *(int *)(lVar2 + 0x40) = iVar1 + 1;
switchD_02943f30_default:
  return;
}


