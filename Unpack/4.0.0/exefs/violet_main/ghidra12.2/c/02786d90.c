/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786d90; name: FUN_02786d90
 */


int FUN_02786d90(char *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  DeliveryCacheFile aDStack_48 [8];
  undefined8 local_28;
  
  local_28 = 0;
  nn::bcat::DeliveryCacheFile::DeliveryCacheFile(aDStack_48);
  iVar1 = nn::bcat::DeliveryCacheFile::Open((char *)aDStack_48);
  if (iVar1 == 0) {
    uVar2 = nn::bcat::DeliveryCacheFile::GetSize();
    uVar3 = (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,uVar2);
    iVar1 = nn::bcat::DeliveryCacheFile::Read((ulong *)aDStack_48,(long)&local_28,(void *)0x0,uVar3)
    ;
    uVar2 = local_28;
    if (iVar1 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      if (param_1 == (char *)0x0) {
        iVar1 = 0;
      }
      else {
        snprintf(param_1,0x40,"%s",param_3);
        iVar1 = 0;
        *(ulong *)(param_1 + 0x48) = uVar3;
        *(undefined8 *)(param_1 + 0x50) = uVar2;
      }
    }
  }
  nn::bcat::DeliveryCacheFile::Close();
  nn::bcat::DeliveryCacheFile::~DeliveryCacheFile(aDStack_48);
  return iVar1;
}


