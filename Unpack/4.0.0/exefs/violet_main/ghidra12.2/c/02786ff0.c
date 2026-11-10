/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786ff0; name: FUN_02786ff0
 */


int FUN_02786ff0(long param_1,undefined8 param_2,char *param_3,int *param_4)

{
  int iVar1;
  DirectoryName *pDVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_cf0 [8];
  int local_ce8;
  int local_ce4;
  DirectoryName aDStack_ce0 [3200];
  
  memset(aDStack_ce0,0,0xc80);
  local_ce4 = 0;
  iVar1 = nn::bcat::EnumerateDeliveryCacheDirectory(&local_ce4,aDStack_ce0,100);
  if (iVar1 == 0) {
    if (local_ce4 < 1) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      lVar4 = 0;
      iVar3 = 0;
      pDVar2 = aDStack_ce0;
      do {
        if (*param_3 != '\0') break;
        local_ce8 = 0;
        FUN_02785618(auStack_cf0,param_2);
        iVar1 = FUN_02786e90(param_1 + (long)iVar3 * 0x58,auStack_cf0,param_3,pDVar2,&local_ce8);
        FUN_02782500(auStack_cf0);
        if (iVar1 != 0) {
          local_ce8 = 0;
        }
        iVar3 = local_ce8 + iVar3;
        if (iVar1 != 0) goto joined_r0x02787108;
        lVar4 = lVar4 + 1;
        pDVar2 = pDVar2 + 0x20;
      } while (lVar4 < local_ce4);
      iVar1 = 0;
    }
joined_r0x02787108:
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
  }
  return iVar1;
}


