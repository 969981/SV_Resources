/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035b290; name: FUN_0035b290
 */


/* WARNING: Removing unreachable block (ram,0x0035b310) */
/* WARNING: Removing unreachable block (ram,0x0035b330) */
/* WARNING: Removing unreachable block (ram,0x0035b3ec) */

undefined8 FUN_0035b290(long param_1,int param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 local_48;
  
  cVar4 = *(char *)(param_1 + 1);
  if (cVar4 == '\x1c') {
    FUN_0038dcd0(&DAT_047ef708,&LAB_0035b1e0,param_2,param_3);
    if (DAT_047ef6fc == '\x01') {
      iVar1 = nnsocketSocket(0x1c,param_2,param_3);
      if ((param_2 == 1) && (-1 < iVar1)) {
        local_48 = 0x200000001;
        nnsocketSetSockOpt(iVar1,0xffff,0x80000001,&local_48,8);
      }
      *param_5 = iVar1;
    }
    else {
      *param_5 = -1;
      piVar2 = __errno_location();
      *piVar2 = 0x61;
      iVar1 = *param_5;
    }
    if ((-1 < iVar1) && (iVar1 = FUN_0035b5b0(iVar1), iVar1 != 0)) {
      *param_4 = 3;
      return 0;
    }
    iVar1 = FUN_0035a0c0(param_1,0);
    if (iVar1 == 0) {
      *param_4 = 2;
      iVar1 = *param_5;
      goto LAB_0035b450;
    }
    if (-1 < *param_5) {
      nnsocketClose();
    }
    cVar4 = '\x02';
  }
  *param_4 = (uint)(cVar4 == '\x02');
  iVar1 = nnsocketSocket(cVar4,param_2,param_3);
  if ((param_2 == 1) && (-1 < iVar1)) {
    local_48 = 0x200000001;
    nnsocketSetSockOpt(iVar1,0xffff,0x80000001,&local_48,8);
  }
  *param_5 = iVar1;
LAB_0035b450:
  uVar3 = FUN_0035b480(iVar1,param_1);
  return uVar3;
}


