/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250adc; name: FUN_01250adc
 */


void FUN_01250adc(long param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  void *__s;
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 local_68 [8];
  
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + 0x68) = 0;
  lVar5 = 0;
  do {
    uVar2 = (&DAT_03d6abe6)[lVar5];
    puVar3 = (undefined1 *)FUN_010af09c(lVar4);
    lVar5 = lVar5 + 4;
    *puVar3 = uVar2;
  } while (lVar5 != 0x340);
  __s = (void *)(param_1 + 0x50b8);
  memset(__s,0,0x73b0);
  FUN_013702c0(__s);
  memset((void *)(param_1 + 0x7640),0,0x4e24);
  FUN_01250bf8(*(undefined8 *)(param_1 + 0x28),__s);
  FUN_01250c0c(*(undefined8 *)(param_1 + 8),local_68);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x68);
  *(uint *)(param_1 + 0x7640) = uVar1;
  memcpy((void *)(param_1 + 0x7644),(void *)(*(long *)(param_1 + 0x10) + 0x70),(ulong)uVar1);
  *param_2 = __s;
  *param_3 = 0x73b0;
  *param_4 = *param_4 + 1;
  *(undefined1 *)(param_1 + 0xc4a5) = local_68[0];
  return;
}


