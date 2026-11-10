/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786e90; name: FUN_02786e90
 */


int FUN_02786e90(long param_1,undefined8 param_2,char *param_3,char *param_4,undefined4 *param_5)

{
  int iVar1;
  char *param4;
  long lVar2;
  undefined1 auStack_1698 [8];
  char acStack_1690 [68];
  int local_164c;
  char acStack_1648 [5600];
  DeliveryCacheDirectory aDStack_68 [8];
  
  nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory(aDStack_68);
  memset(acStack_1648,0,0x15e0);
  local_164c = 0;
  iVar1 = nn::bcat::DeliveryCacheDirectory::Open((char *)aDStack_68);
  if ((iVar1 == 0) &&
     (iVar1 = nn::bcat::DeliveryCacheDirectory::Read
                        ((int *)aDStack_68,(DeliveryCacheDirectoryEntry *)&local_164c,
                         (int)acStack_1648), iVar1 == 0)) {
    if (local_164c < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      param4 = acStack_1648;
      do {
        if (*param_3 != '\0') break;
        snprintf(acStack_1690,0x40,"%s/%s",param_4,param4);
        FUN_02785618(auStack_1698,param_2);
        iVar1 = FUN_02786d90(param_1,auStack_1698,acStack_1690,0);
        FUN_02782500(auStack_1698);
        if (iVar1 != 0) goto LAB_02786ef8;
        lVar2 = lVar2 + 1;
        param_1 = param_1 + 0x58;
        param4 = param4 + 0x38;
      } while (lVar2 < local_164c);
    }
    iVar1 = 0;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)lVar2;
    }
  }
LAB_02786ef8:
  nn::bcat::DeliveryCacheDirectory::Close();
  nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_68);
  return iVar1;
}


