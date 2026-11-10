/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a6028; name: FUN_017a6028
 */


void FUN_017a6028(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_18;
  
  lVar4 = *(long *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = (*(long *)(param_1 + 0x58) - lVar4 >> 3) * -0x3333333333333333;
  if (iVar1 < (int)uVar3) {
    if (uVar3 <= (ulong)(long)iVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar2 = FUN_017a6334(*(undefined8 *)(param_1 + 8));
    FUN_017a6198(&local_18,uVar2);
    FUN_017a60e4(param_1 + 0x48,0);
    uVar2 = local_18;
    local_18 = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    FUN_017a6120(&local_18);
    FUN_017a6254(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(lVar4 + (long)iVar1 * 0x28 + 0x20))
    ;
    *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x25c9) = 1;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}


