/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786af0; name: FUN_02786af0
 */


int FUN_02786af0(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_22c0 [2];
  DeliveryCacheFile aDStack_22b8 [8];
  undefined1 auStack_22b0 [5600];
  DirectoryName aDStack_cd0 [3200];
  DeliveryCacheDirectory aDStack_38 [8];
  
  memset(aDStack_cd0,0,0xc80);
  memset(auStack_22b0,0,0x15e0);
  nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory(aDStack_38);
  nn::bcat::DeliveryCacheFile::DeliveryCacheFile(aDStack_22b8);
  local_22c0[0] = 0;
  local_22c0[1] = 0;
  if (param_2 == 2) {
    iVar1 = nn::bcat::EnumerateDeliveryCacheDirectory(local_22c0 + 1,aDStack_cd0,100);
    if (iVar1 != 0) goto LAB_02786c28;
  }
  else {
    local_22c0[0] = 0;
    local_22c0[1] = 1;
    snprintf((char *)aDStack_cd0,0x1f,"%s",param_1);
  }
  if (local_22c0[1] < 1) {
    iVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = nn::bcat::DeliveryCacheDirectory::Open((DirectoryName *)aDStack_38);
      if (iVar1 != 0) {
        nn::bcat::DeliveryCacheDirectory::Close();
        if (param_3 == (int *)0x0) goto LAB_02786c28;
        goto LAB_02786c24;
      }
      iVar1 = nn::bcat::DeliveryCacheDirectory::Read
                        ((int *)aDStack_38,(DeliveryCacheDirectoryEntry *)local_22c0,
                         (int)auStack_22b0);
      nn::bcat::DeliveryCacheDirectory::Close();
      if (iVar1 != 0) goto LAB_02786c20;
      iVar2 = local_22c0[0] + iVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < local_22c0[1]);
  }
  iVar1 = 0;
LAB_02786c20:
  if (param_3 != (int *)0x0) {
LAB_02786c24:
    *param_3 = iVar2;
  }
LAB_02786c28:
  nn::bcat::DeliveryCacheFile::~DeliveryCacheFile(aDStack_22b8);
  nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_38);
  return iVar1;
}


