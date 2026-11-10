/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6288; name: FUN_007e6288
 */


void FUN_007e6288(long param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  FUN_007ec490();
  plVar2 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 8));
  cVar1 = FUN_007ec4f0(param_1);
  if (cVar1 != -3) {
    lVar4 = FUN_007ec4a8(param_1);
    lVar5 = *(long *)(lVar3 + 0x30);
    if (lVar4 != lVar5) {
      if (*param_2 == '\x01') {
        FUN_007ef75c(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x28),
                     1);
        return;
      }
      if (*param_2 == '\0') {
        FUN_007ef588(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x28),
                     *(undefined2 *)(lVar3 + 0x38));
      }
    }
  }
  return;
}


